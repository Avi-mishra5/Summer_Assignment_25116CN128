#include <stdio.h>
#include <string.h>
#define MAX 50
int main() {
    int empId[MAX], age[MAX], count = 0, i, choice, searchId;
    float salary[MAX];
    char empName[MAX][50];
    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[count]);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", empName[count]);
                printf("Enter Age: ");
                scanf("%d", &age[count]);
                printf("Enter Salary: ");
                scanf("%f", &salary[count]);
                count++;
                printf("Employee added successfully!\n");
                break;
            case 2:
                if(count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nID\tName\t\tAge\tSalary\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%-15s\t%d\t%.2f\n",
                               empId[i], empName[i], age[i], salary[i]);
                    }
                }
                break;
            case 3: {
                int found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                for(i = 0; i < count; i++) {
                    if(empId[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID: %d\n", empId[i]);
                        printf("Name: %s\n", empName[i]);
                        printf("Age: %d\n", age[i]);
                        printf("Salary: %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found.\n");
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
    return 0;
}