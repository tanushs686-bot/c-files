#include <stdio.h>
int main (){
    int i,n,sum=0;

    printf("Enter number---");
    scanf("%d",&i);

    sum=sum+i;

    while (i>=0) {
        printf("%d\n",sum);
        i--;
    }
}