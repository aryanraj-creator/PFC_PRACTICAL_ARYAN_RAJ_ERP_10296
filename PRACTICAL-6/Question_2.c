//sum of even numbers using continue

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;   // skip odd numbers

        sum = sum + i;
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}
