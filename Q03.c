#include <stdio.h>
int main(){
    int var=100;

{
    int var1=20;
    printf("Inside inner block  1 :\n");
    printf("Outer Variable: %d\n", var);
    printf("Inner Variable1: %d\n", var1);

    {
        int var2=50;
        printf("Inside inner block  2 :\n");
        printf("Outer Variable: %d\n", var);
        printf("Inner Variable1: %d\n", var1);
        printf("Inner Variable2: %d\n", var2);

    }
}
return 0;
}
