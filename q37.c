#include <stdio.h>
int main() {
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    printf("First digit: %d\n", n / 10);
    return 0;
}