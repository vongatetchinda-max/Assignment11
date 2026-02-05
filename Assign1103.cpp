#include <stdio.h>
int main() {
    float num1, num2, max, min;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }
    printf("MAX: %f\n", max);
    printf("MIN: %f\n", min);
    return 0;
}
