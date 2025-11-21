#include <stdio.h>
int global_var=100;
void F1(){
    int local_var=77;
    printf("::Inside Function::\n");
    printf("Value of local variable: %d\n", local_var);
    printf("Value of global variable: %d\n", global_var);
}
int main(){
    F1();
    printf("::Inside main::\n");
    printf("Global variable value: %d", global_var);
    //printf("Local variable value: %d", local_var);
    //Above statement produces an error as we are trying to access a local variable.
    return 0;
}
    