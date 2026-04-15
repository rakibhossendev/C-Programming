#include<stdio.h>
struct Student{
    int id;
    char name[100];
    char fatherName[100];
    char montherName[100];
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
    printf("\n\n  ----------------------");
    printf("\n  |  Total students:   |\n");
    printf("  ----------------------");
    
    printf("\n\n  Menu");
    printf("\n  ——————————————————————");
    printf("\n  | 1. Add student    |\n");
    printf("  | 2. Edit student   |\n");
    printf("  | 3. Delete student |\n");
    printf("  | 4. Add student    |\n");
    printf("  | 5. Show student   |\n");
    printf("  —————————————————————");
    
}

void addStudent(){
    int option;
    int addStudentNumber;
    
    printf("\n\n  Enter option: ");
    scanf("%d",&option);
    
    if(option == 1){
        printf("  How many add student?: ");
        scanf("%d",&addStudentNumber);
    }
    
    struct Student studentAdd[addStudentNumber];
    
    for(int i = 0; i < addStudentNumber; i++){
        printf("\n  Enter data of student %d ",i+1);
        printf("\n  Enter id: ");
        scanf("%d",&studentAdd[i].id);
        
        printf("  Enter Name: ");
        scanf("%s",&studentAdd[i].name);
        
        printf("  Enter Father name: ");
        scanf("%s",&studentAdd[i].fatherName);
        
        printf("  Enter Mother name: ");
        scanf("%s",&studentAdd[i].montherName);
        
        printf("  Enter phone: ");
        scanf("%s",&studentAdd[i].phone);
        
        printf("  Enter address: ");
        scanf("%s",&studentAdd[i].address);
        
        printf("\n");
        
    }
}

int main(){
    banner();
    showData();
    addStudent();
    
    return 0;
}