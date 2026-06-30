#include <stdio.h>
#include <string.h>
#define MAX 50
int main() 
{
    int n, i, choice, roll[MAX], count = 0;
    char name[MAX][30];
    float marks[MAX];
    do 
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("How many students to add? ");
                scanf("%d", &n);
                for(i = 0; i < n; i++) 
                {
                    printf("\nStudent %d\n", count + 1);
                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[count]);
                    printf("Enter Name: ");
                    scanf("%s", name[count]);
                    printf("Enter Marks: ");
                    scanf("%f", &marks[count]);
                    count++;
                }
                break;
            case 2:
                if(count == 0) 
                    printf("No records found.\n");
                else 
                {
                    printf("\n--- Student Records ---\n");
                    printf("Roll\tName\tMarks\n");
                    for(i = 0; i < count; i++)
                    printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
                }
                break;
            case 3: 
            {
                int searchRoll, found = 0;
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);
                for(i = 0; i < count; i++) 
                {
                    if(roll[i] == searchRoll) 
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number: %d\n", roll[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Marks: %.2f\n", marks[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                printf("Student record not found.\n");
                break;
            }
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } 
    while(choice != 4);
    return 0;
}