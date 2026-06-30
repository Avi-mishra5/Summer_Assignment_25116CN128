#include <stdio.h>
#include <string.h>
#define MAX 50
int main() {
    int choice, count = 0, i;
    int bookId[MAX], quantity[MAX], searchId;
    char bookName[MAX][50];
    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[count]);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName[count]);
                printf("Enter Quantity: ");
                scanf("%d", &quantity[count]);
                count++;
                printf("Book added successfully!\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook ID\tBook Name\t\tQuantity\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%-20s\t%d\n",
                               bookId[i], bookName[i], quantity[i]);
                    }
                }
                break;
            case 3: {
                int found = 0;
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                for (i = 0; i < count; i++) {
                    if (bookId[i] == searchId) {
                        printf("\nBook Found!\n");
                        printf("Book ID: %d\n", bookId[i]);
                        printf("Book Name: %s\n", bookName[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Book not found.\n");
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } 
    while (choice != 4);
    return 0;
}