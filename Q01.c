#include <stdio.h>
int global_var=100;
void F1(){
    printf("Value of global variable inside function: %d\n", global_var);
}
void F2(){
    global_var=65;
    printf("Value of global variable inside function after modification: %d\n", global_var);
}
int main(){
    printf("Value of global variable inside main without any function calls: %d\n", global_var);
    F1();
    F2();
    printf("Value of global variable after function calls: %d", global_var);
    return 0;
}

