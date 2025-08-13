#include <stdio.h>
int main() {
    float x, y;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &x, &y);
    if (y != 0.0)
        printf("Result: %.2f\n", x / y);
    else
        printf("Error: Division by zero.\n");
    return 0;
}