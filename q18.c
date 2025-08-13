#include <stdio.h>

int main() {
    float x, y, sum;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &x, &y);

    sum = x + y;
    printf("Sum = %.2f\n", sum);
    return 0;
}