#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank b;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d",&b.accNo);

    printf("Enter Name: ");
    scanf("%s",b.name);

    b.balance = 0;

    while(1) {
        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Balance Enquiry");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f",&amount);
                b.balance += amount;
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);

                if(amount <= b.balance)
                    b.balance -= amount;
                else
                    printf("Insufficient balance.");
                break;

            case 3:
                printf("Balance = %.2f", b.balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.");
        }
    }
}
