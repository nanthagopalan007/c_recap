#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Quotient: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Error: Division by zero.\n");
    }
    return 0;
}