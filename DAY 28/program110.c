#include <stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct Bank b;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);
    b.balance = 0;
    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                b.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= b.balance)
                {
                    b.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                    printf("Insufficient Balance!\n");
                break;
            case 3:
                printf("\nAccount Number : %d\n", b.accNo);
                printf("Account Holder : %s\n", b.name);
                printf("Current Balance: %.2f\n", b.balance);
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } 
    while(choice != 4);
    return 0;
}