#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int totalStudent;

// Menu
char menuMessage_1[50] = "1. Add student ";
char menuMessage_2[50] = "2. Edit student ";
char menuMessage_3[50] = "3. Show student ";
char menuMessage_4[50] = "4. Delete student ";

struct Student{
    int id;
    char firstName[50];
    char lastName[50];
    char fatherFirstName[50];
    char fatherLastName[50];
    char motherFirstName[50];
    char motherLastName[50];
    char phone[15];
    char address[100];
};

// cross-platform clear
void clearScreen(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void banner(){
    printf(" ———————————————————————————————————————");
    printf("\n\tWELCOME TO STUDENT MANAGEMENT\n\t      SYSTEM DASHBOARD\n");
    printf(" ———————————————————————————————————————\n");
}

void resetMenu(){
    strcpy(menuMessage_1, "1. Add student ");
    strcpy(menuMessage_2, "2. Edit student ");
    strcpy(menuMessage_3, "3. Show student ");
    strcpy(menuMessage_4, "4. Delete student ");
}

void showData(){
    printf("\n\n Total students\n");
    printf(" -------------");
    printf("\n |  %-4d     |\n", totalStudent);
    printf(" -------------");

    printf("\n\nMenu");
    printf("\n  ——————————————————————");
    printf("\n      %s\n",menuMessage_1);
    printf("      %s\n",menuMessage_2);
    printf("      %s\n",menuMessage_3);
    printf("      %s\n",menuMessage_4);
    printf("  —————————————————————\n");
}

void totalStudents(){
    totalStudent = 0;
    FILE *file = fopen("studentData.txt","r");

    if(file == NULL) return;

    char line[200];

    while(fgets(line,sizeof(line),file)){
        if(strstr(line,"ID:") != NULL){   // FIX
            totalStudent++;
        }
    }

    fclose(file);
}

void addStudent(){
    FILE *file = fopen("studentData.txt","a");

    if(file == NULL){
        printf("File error\n");
        return;
    }

    int n;
    printf("How many add student?: ");
    scanf("%d",&n);

    struct Student *s = malloc(n * sizeof(struct Student));

    if(s == NULL){
        printf("Memory allocation failed\n");
        fclose(file);
        return;
    }

    for(int i=0;i<n;i++){
        printf("\nEnter data of student %d\n",i+1);

        printf("Enter id: ");
        scanf("%d",&s[i].id);

        printf("Enter full Name: ");
        scanf("%s %s", s[i].firstName, s[i].lastName);

        printf("Enter father's full name: ");
        scanf("%s %s", s[i].fatherFirstName, s[i].fatherLastName);

        printf("Enter Mother name: ");
        scanf("%s %s", s[i].motherFirstName, s[i].motherLastName);

        printf("Enter phone: ");
        scanf("%s", s[i].phone);

        printf("Enter address: ");
        scanf(" %[^\n]", s[i].address);

        fprintf(file,
        "%-16s: %d\n"
        "%-16s: %s %s\n"
        "%-16s: %s %s\n"
        "%-16s: %s %s\n"
        "%-16s: %s\n"
        "%-16s: %s\n\n",
        "ID", s[i].id,
        "Full Name", s[i].firstName, s[i].lastName,
        "Father Name", s[i].fatherFirstName, s[i].fatherLastName,
        "Mother Name", s[i].motherFirstName, s[i].motherLastName,
        "Phone", s[i].phone,
        "Address", s[i].address
        );
    }

    fclose(file);
    free(s);
}

// show all
void showStudent(){
    char data[200];

    FILE *file = fopen("studentData.txt","r");

    if(file == NULL){
        printf("File not found.\n");
        return;
    }

    printf("\n\nStudent list\n");
    printf("————————————————\n");

    while(fgets(data,sizeof(data),file)){
        printf("%s",data);
    }

    fclose(file);
}


void showStudentUsingID(){
    FILE *file = fopen("studentData.txt","r");

    if(!file){
        printf("File not found\n");
        return;
    }

    int studentId,found = 0;
    char line[200];

    printf("\nEnter student ID: ");
    scanf("%d",&studentId);

    while(fgets(line,sizeof(line),file)){
        int fileId;

        if(sscanf(line,"ID: %d",&fileId) == 1){

            if(fileId == studentId){
               // printf("\n ID found!\n");
                found = 1;

                printf("%s",line);

                
                while(fgets(line,sizeof(line),file)){
                    if(strcmp(line,"\n")==0) break;
                    printf("%s",line);
                }
                break;
            }
        }
    }

    if(!found){
        printf("\nID not found!\n");
    }

    fclose(file);
}

void showingByCondition(){
    strcpy(menuMessage_1, "1. Show full data");
    strcpy(menuMessage_2, "2. Show specific student");
    strcpy(menuMessage_3, "3. Searching");
    strcpy(menuMessage_4, "4. Filtering");
}

void continueProccess(){
    printf("\nPress Enter to continue...");
    getchar();
    getchar();

    clearScreen();   
}

int optionInput(){
    int option;
    printf("Enter option: ");
    scanf("%d",&option);
    return option;
}

int main(){
    int option;

    while(1){
        totalStudents();
        banner();
        showData();

        option = optionInput();

        
        if(option == 0){
            printf("Exiting...\n");
            break;
        }else if(option == 1){
            addStudent();
        }else if(option == 3){
            continueProccess();
            showingByCondition();
            showData();

            option = optionInput();

            
            if(option == 1){
                showStudent();
                continueProccess();
            }else if(option == 2){
                showStudentUsingID();
                continueProccess();
            }
        }else{
            printf("Invalid option!\n");
        }

        resetMenu();
        clearScreen();   
    }

    return 0;
}
