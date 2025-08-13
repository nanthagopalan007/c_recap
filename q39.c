#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int units = n % 10;
    int tens = (n / 10) % 10;
    printf("Tens digit: %d\n", tens);
    printf("Units digit: %d\n", units);
    return 0;
}