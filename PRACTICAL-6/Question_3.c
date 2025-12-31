// ATM Pin Authentication

#include <stdio.h>

int main() {
    int pin, original_pin = 1234, attempts = 3;

    while(attempts > 0) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &pin);

        if(pin == original_pin) {
            printf("Access Granted! Transaction Allowed.\n");
            break;
        } else {
            attempts--;
            printf("Wrong PIN! Attempts left: %d\n", attempts);
        }
    }

    if(attempts == 0) {
        printf("Card Blocked! Too many wrong attempts.\n");
    }

    return 0;
}