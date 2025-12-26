// Write function sumOfDigits that take n as input and return sum of its digits

#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while(n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
