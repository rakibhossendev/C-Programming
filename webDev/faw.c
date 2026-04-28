#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    bind(server_fd, (struct sockaddr *)&address, sizeof(address));
    listen(server_fd, 3);

    printf("Server running on 8080...\n");

    client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);

    char buffer[30000] = {0};
    read(client_socket, buffer, 30000);

    printf("Request:\n%s\n", buffer);

    // 🔥 ROUTING PART START
    char *home = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>Home Page</h1>";
    char *about = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>About Page</h1>";
    char *notfound = "HTTP/1.1 404 Not Found\nContent-Type: text/html\n\n<h1>404 Page</h1>";

    if (strstr(buffer, "GET /about")) {
        write(client_socket, about, strlen(about));
    }
    else if (strstr(buffer, "GET /")) {
        write(client_socket, home, strlen(home));
    }
    else {
        write(client_socket, notfound, strlen(notfound));
    }

    close(client_socket);
    close(server_fd);

    return 0;
}
 