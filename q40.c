#include <stdio.h>
int main() {
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    int sum = (n / 10) + (n % 10);
    printf("Sum of digits: %d\n", sum);
    return 0;
}