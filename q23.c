#include <stdio.h>
int main() {
    int twoDigit, oneDigit;
    printf("Enter a two-digit number and a one-digit number: ");
    scanf("%d %d", &twoDigit, &oneDigit);
    printf("Result: %d\n", twoDigit - oneDigit);
    return 0;
}