#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
        printf("Single-digit\n");
    else if (n >= 10 && n <= 99)
        printf("Double-digit\n");
    else
        printf("More than two digits\n");
    return 0;
}