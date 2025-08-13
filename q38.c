#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int tens = (n / 10) % 10;
    printf("Tens digit: %d\n", tens);
    return 0;
}