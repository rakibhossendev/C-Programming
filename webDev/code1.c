#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<time.h>

int main(){
    int server_fd, client_socket;
    struct sockaddr_in address;
    int addressLen = sizeof(address);
    server_fd = socket(AF_INET,SOCK_STREAM,0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);
    bind(server_fd,(struct sockaddr *)&address,sizeof(address));
    listen(server_fd,3);
    printf("server running on port 8080...\n");
    while(1) {
        client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addressLen);
        char buffer[30000] = {0};
        read(client_socket, buffer, 30000);
        printf("Request:\n%s\n", buffer);
        char *home = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>Home Page</h1>";
        char *about = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h2>About page </h2> <p>I am learning C web server</p>";
        char *time_page = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>Time</h1>";
        char *notFound = "HTTP/1.1 404 Not Found\nContent-Type:text/html\n\n<h1>404 Page not found</h1>";
        if(strstr(buffer, "GET /about")) {
            write(client_socket, about, strlen(about));
        }else if(strstr(buffer, "GET / ")) {
            write(client_socket, home, strlen(home));
        }else if(strstr())
        else {
            write(client_socket, notFound, strlen(notFound));
        }
        close(client_socket);
    }
    
    return 0;
}