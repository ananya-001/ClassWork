#include <stdio.h>
int main(){
    int num, c1=0, c2=0, c3=0, c4=0, c5=0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d :", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i]>0){
            c1=c1+1;}
        else if (arr[i]<0){
            c2=c2+1;}
        else {
            c3=c3+1;}
        if (arr[i]%2==0){
            c4=c4+1;}
        else{
            c5=c5+1;}
    }
    printf("Positive Numbers: %d\n", c1);
    printf("Negative Numbers: %d\n", c2);
    printf("Number of Zeroes: %d\n",c3);
    printf("Number of Even Numbers: %d\n",c4);
    printf("Number of Odd numbers: %d\n", c5);   
}





