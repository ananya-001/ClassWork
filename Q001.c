#include <stdio.h>
int factRec(int n) {
    if (n == 0)
        return 1;
    else
        return n * factRec(n - 1);
}
int factNonRec(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main() {
    int n, r;
    int Rec, NonRec;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (r > n) {
        printf("Invalid input! r should be less than or equal to n.\n");
        return 0;
    }
    Rec = factRec(n) / (factRec(r) * factRec(n - r));
    NonRec = factNonRec(n) / (factNonRec(r) * factNonRec(n - r));
    printf("Binomial Coefficient C(%d, %d):\n", n, r);
    printf("Using Recursive Function: %d\n", Rec);
    printf("Using Non-Recursive Function: %d\n", NonRec);
    return 0;
}










