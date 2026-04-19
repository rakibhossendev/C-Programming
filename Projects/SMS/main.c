#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int totalStudent;

// For Dynamic menu
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

void addStudent(){
    FILE *file = fopen("studentData.txt","a");

    if(file == NULL){
        printf("File error\n");
        return;
    }

    int addStudentNumber;
    printf("How many add student?: ");
    scanf("%d",&addStudentNumber);

    struct Student *studentAdd = malloc(addStudentNumber * sizeof(struct Student));

    if(studentAdd == NULL){
        printf("Memory allocation failed\n");
        fclose(file);
        return;
    }

    for(int i = 0; i < addStudentNumber; i++){
        printf("\nEnter data of student %d\n",i+1);

        printf("Enter id: ");
        scanf("%d",&studentAdd[i].id);

        printf("Enter full Name: ");
        scanf("%s %s", studentAdd[i].firstName, studentAdd[i].lastName);

        printf("Enter father's full name: ");
        scanf("%s %s", studentAdd[i].fatherFirstName, studentAdd[i].fatherLastName);

        printf("Enter Mother name: ");
        scanf("%s %s", studentAdd[i].motherFirstName, studentAdd[i].motherLastName);

        printf("Enter phone: ");
        scanf("%s", studentAdd[i].phone);

        printf("Enter address: ");
        scanf(" %[^\n]", studentAdd[i].address);

        fprintf(file,
        "%-16s: %d\n"
        "%-16s: %s %s\n"
        "%-16s: %s %s\n"
        "%-16s: %s %s\n"
        "%-16s: %s\n"
        "%-16s: %s\n\n",
        "ID", studentAdd[i].id,
        "Full Name", studentAdd[i].firstName, studentAdd[i].lastName,
        "Father Name", studentAdd[i].fatherFirstName, studentAdd[i].fatherLastName,
        "Mother Name", studentAdd[i].motherFirstName, studentAdd[i].motherLastName,
        "Phone", studentAdd[i].phone,
        "Address", studentAdd[i].address
        );
    }

    fclose(file);
    free(studentAdd);
}

// 
void showingByCondition(){
    strcpy(menuMessage_1, "1. Show full data");
    strcpy(menuMessage_2, "2. Show specific student");
    strcpy(menuMessage_3, "3. Searching");
    strcpy(menuMessage_4, "4. Filtering");
}

// Show studentHere
void showStudent(){
    char data[200];
    
    FILE *file = fopen("studentData.txt","r");
    
    if(file == NULL){
        printf("File not found.\n");
        return;
    }
    
    printf("\n\nStudent list\n");
    printf("————————————————\n");
    
    while(fgets(data,sizeof(data),file) != NULL){
        printf("%s",data);
    }

    fclose(file);
}

// Count total student student here. 
void totalStudents(){
    totalStudent = 0;

    FILE *file = fopen("studentData.txt","r");
    
    if(file == NULL){
        return;
    }
    
    char line[200];
    
    while(fgets(line,sizeof(line),file) != NULL){
        if(strstr(line, "ID") != NULL){
            totalStudent++;
        }
    }

    fclose(file);
}


// Show student searching using id
void showStudentUsingID(){
    FILE *file = fopen("studentsData.txt","r");
    
    if(!file){
        printf("File not found\n");
        
        return;
    }
    
    int studentId,found;
    char line[200];
    
    printf("\nEnter student ID: ");
    scanf("%d",&studentId);
    
    while(fgets(line,sizeof(line),file) != NULL){
        int filedId;
        
        //Extract to id
        if(sscanf(line,"ID: %d",&filedId) == 1){
            
            if(filedId == studentId){
                printf("\n ID founded!\n");
                found = 1;
                
                printf("%s",line);
                
                for(int i = 0; i<5; i++){
                    if(fgets(line,sizeof(line),file)){
                        printf("%s",line);
                    }
                }
                break;
            }
        }
        
    }
    
    fclose(file);
    
}

// If continue proccessing here.
void continueProccess(){
    printf("\nPress Enter to continue...");
    getchar();
    getchar();

    system("clear"); 
}

// Option input function
int optionInput(){
    int option;
    
    printf("Enter option: ");
    scanf("%d",&option);
    
    return option;
    
}


// Main Function here

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
        }
        else if(option == 1){
            addStudent();
        }
        else if(option == 3){
            continueProccess();
            showingByCondition();
            showData();
            
            
            option = optionInput();
            if(option == 1){
                showStudent();
                continueProccess();
            }else if(option == 2){
                continueProccess();
                showStudentUsingID();
            }
        }
        else{
            printf("Invalid option!\n");
        }

        resetMenu();
        system("clear");
    }

    return 0;
}