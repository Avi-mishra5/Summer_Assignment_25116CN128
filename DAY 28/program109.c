#include <stdio.h>
struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};
int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found;
    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);
                b[n].issued = 0;
                n++;
                printf("Book Added Successfully!\n");
                break;
            case 2:
                if(n == 0)
                    printf("No books available.\n");
                else
                {
                    printf("\nID\tBook Name\tAuthor\t\tStatus\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%s\t\t",
                               b[i].id, b[i].name, b[i].author);
                        if(b[i].issued == 0)
                            printf("Available\n");
                        else
                            printf("Issued\n");
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("Book Found!\n");
                        printf("ID: %d\n", b[i].id);
                        printf("Name: %s\n", b[i].name);
                        printf("Author: %s\n", b[i].author);
                        printf("Status: %s\n",
                               b[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;
                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                            printf("Book is already issued.\n");
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 5:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;
                        if(b[i].issued == 1)
                        {
                            b[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                            printf("Book was not issued.\n");
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } 
    while(choice != 6);
    return 0;
}