#include <stdio.h>
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Product p[100];
    int n, i, searchId, found = 0;
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &p[i].id);
        printf("Product Name: ");
        scanf("%s", p[i].name);
        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
        printf("Price: ");
        scanf("%f", &p[i].price);
    }
    printf("\n----- INVENTORY DETAILS -----\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price);
    }
    printf("\nEnter Product ID to search: ");
    scanf("%d", &searchId);
    found = 0;
    for(i = 0; i < n; i++)
    {
        if(p[i].id == searchId)
        {
            printf("\nProduct Found!\n");
            printf("ID: %d\n", p[i].id);
            printf("Name: %s\n", p[i].name);
            printf("Quantity: %d\n", p[i].quantity);
            printf("Price: %.2f\n", p[i].price);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Product not found.\n");
    return 0;
}