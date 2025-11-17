#include <stdio.h>

void deposit(float *bal);
void withdraw(float *bal);
float average(float *bal);

int i, j;

int main() {
    float balance[5];
    float avg;
    int choice;
    printf("Enter balances for 5 customers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &balance[i]);
    }

    do {
        printf("\n1 Deposit\n2 Withdraw\n3 Show Average\n4 Show Balances\n5 Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter customer index (0-4): ");
            scanf("%d", &j);
            deposit(&balance[j]);
        }

        if (choice == 2) {
            printf("Enter customer index (0-4): ");
            scanf("%d", &j);
            withdraw(&balance[j]);
        }

        if (choice == 3) {
            avg = average(balance);
            printf("Average balance = %.2f\n", avg);
        }

        if (choice == 4) {
            for (i = 0; i < 5; i++) {
                printf("Customer %d: %.2f\n", i, balance[i]);
            }
        }

    } while (choice != 5);

    return 0;
}

void deposit(float *bal) {
    float amt;
    printf("Enter amount: ");
    scanf("%f", &amt);
    *bal = *bal + amt;
}

void withdraw(float *bal) {
    float amt;
    printf("Enter amount: ");
    scanf("%f", &amt);
    if (amt <= *bal)
        *bal = *bal - amt;
    else
        printf("Insufficient balance\n");
}

float average(float *bal) {
    float sum = 0;
    for (i = 0; i < 5; i++) {
        sum = sum + *(bal + i);
    }
    return sum / 5.0;
}


