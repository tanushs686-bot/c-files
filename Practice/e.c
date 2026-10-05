#include <stdio.h>

int main() {
    int n;
    printf("Enter number....");
    scanf("%d",&n);

    
    if(n>0){
        printf("number is positive.\n");
    } else if (n<0){
        printf("number is negative.\n");
    } else{
        printf("number is zero.\n");
    } 
    
    if (n%2==0){
        printf("number is even.\n");
    } else if (!(n%2==0)){
        printf("number is odd.\n");
    } 
    return  0;
}