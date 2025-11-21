#include <stdio.h>
int ISPRIME(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;   }
    return 1;
}

int main() {
    int lower, upper, i;   
    printf("Enter the smaller number: ");
    scanf("%d", &lower);
    printf("Enter the larger number: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);   
    for (i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }
    return 0;
}









