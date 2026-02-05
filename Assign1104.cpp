#include <stdio.h>
int main() {
    int n1, n2, n3, max, min;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    min = n1;
    if (n2 < min) min = n2;
    if (n3 < min) min = n3;
    printf("MAXIMUM between 3 numbers = %d\n", max);
    printf("MINIMUM between 3 numbers = %d\n", min);
    return 0;
}
