#include <stdio.h>
int main() {
    int num1, num2, max;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    printf("max = %d\n", max);
    return 0;
}
