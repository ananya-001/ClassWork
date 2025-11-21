#include <stdio.h>
int main(){
    int num,c1=0, number;
    printf("Enter the number of integers you want to enter: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer for finding the frequency: ");
    scanf("%d", &number);
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == number){
            c1=c1+1;
        }
    }
    printf("%d has occured %d times.", number, c1);   
}





















