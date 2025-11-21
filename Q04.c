#include <stdio.h>
void Static1(){
    static int var1=0;
    var1++;
    printf("This function has been called %d times.\n", var1);
}
int main(){
    Static1();
    Static1();
    Static1();
}