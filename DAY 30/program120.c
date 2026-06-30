#include <stdio.h>
#include <string.h>
#define MAX 50
int roll[MAX], count = 0;
char name[MAX][50];
float marks[MAX];
void addStudent();
void displayStudents();
void searchStudent();
int main() {
    int choice;
    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);
    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);
    printf("Enter Marks: ");
    scanf("%f", &marks[count]);
    count++;
    printf("Student Record Added Successfully!\n");
}
void displayStudents() {
    int i;
    if(count == 0) {
        printf("No Records Found!\n");
        return;
    }
    printf("\nRoll\tName\t\tMarks\n");
    for(i = 0; i < count; i++)
    printf("%d\t%-15s\t%.2f\n", roll[i], name[i], marks[i]);
}
void searchStudent() {
    int i, searchRoll, found = 0;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);
    for(i = 0; i < count; i++) {
        if(roll[i] == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Student Not Found!\n");
}