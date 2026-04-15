#include<stdio.h>
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
    printf("\n\tWELCOME TO STUDENT MANAGMET \n\t      SYSTEM DASHBORD\n");
    
    //printf(" \n| \n| \n|\n| \n| \n|\n| \n| \n|\n| \n| \n|");
    printf(" ———————————————————————————————————————\n");
    
}
void showData(){
    printf("\n\n Total students\n");
    printf(" -------------");
    printf("\n |  00000    |\n");
    printf(" -------------");
    
    printf("\n\nMenu");
    printf("\n  ——————————————————————");
    printf("\n  | 1. Add student    |\n");
    printf("  | 2. Edit student   |\n");
    printf("  | 3. Delete student |\n");
    printf("  | 4. Add student    |\n");
    printf("  | 5. Show student   |\n");
    printf("  —————————————————————");
    
}

void addStudent(){
    FILE *file;
    
    file = fopen("studentData.txt","a");
    
    int option;
    int addStudentNumber;
    
    printf("\n\nEnter option: ");
    scanf("%d",&option);
    
    if(option == 1){
        printf("How many add student?: ");
        scanf("%d",&addStudentNumber);
    }
    
    struct Student studentAdd[addStudentNumber];
    
    for(int i = 0; i < addStudentNumber; i++){
        printf("\nEnter data of student %d ",i+1);
        printf("\nEnter id: ");
        scanf("%d",&studentAdd[i].id);
        
        printf("Enter full Name: ");
        scanf("%s %s",&studentAdd[i].firstName,&studentAdd[i].lastName);
        
        printf("Enter father's full name: ");
        scanf("%s  %s",&studentAdd[i].fatherFirstName,&studentAdd[i].fatherLastName);
        
        printf("Enter Mother name: ");
        scanf("%s %s",&studentAdd[i].motherFirstName,&studentAdd[i].motherLastName);
        
        printf("Enter phone: ");
        scanf("%s",&studentAdd[i].phone);
        
        printf("Enter address: ");
        scanf("%s",&studentAdd[i].address);
        
        fprintf(file,"ID: %d\nFull Name: %s %s\nFather's Name: %s %s\nMother's Name: %s %s\nPhone: %s\nAddress: %s\n\n",studentAdd[i].id,studentAdd[i].firstName,&studentAdd[i].lastName,studentAdd[i].fatherFirstName,&studentAdd[i].fatherLastName,studentAdd[i].motherFirstName,&studentAdd[i].motherLastName,studentAdd[i].phone,studentAdd[i].address);
        fclose(file);
        
        printf("\n");
        
    }
}

int main(){
    banner();
    showData();
    addStudent();
    
    return 0;
}