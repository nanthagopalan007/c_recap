#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Modulus: %d\n", a % b);
    else
        printf("Error: Division by zero.\n");
    return 0;
}