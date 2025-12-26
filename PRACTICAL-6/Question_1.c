//print numbers from a to b using loops

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}
