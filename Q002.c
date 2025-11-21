#include <stdio.h>
int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    else {
        return GCD(num2, num1 % num2);
    }
}
int main() {
    int number1, number2;
    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);
    printf("The GCD of %d and %d is %d.\n", number1, number2, GCD(number1, number2));
    return 0;
}





