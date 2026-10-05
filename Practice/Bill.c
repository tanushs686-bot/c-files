#include <stdio.h>
int main(){

    int u;

    printf("Enter number of units \n");
    scanf("%d",&u);

    if (0<=u && u<=100){
        printf("Bill---%d",u*5);
    } else if (101<=u && u<=200){
        printf("Bill---%d",(u-100)*7 + 100*5);
    } else if (200<=u){
        printf("Bill---%d",((u-200)*10)+(100*5)+(100*7));
    } else {
        printf("error");
    }



    return 0;
}