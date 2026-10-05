#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter number A---");
    scanf("%d",&a);

    printf("Enter number B---");
    scanf("%d",&b);

    printf("Enter number C---");
    scanf("%d",&c);

    if ( a>=b && a>= c){
        printf("Largest number---%d",a);
    } else if (b>=a && b>=c){
        printf("Largest number---%d",b);
    } else {
        printf("Largest number---%d",c);
    }



    
    
    return  0;
}