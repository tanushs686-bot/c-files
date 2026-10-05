/* WAP to calculate perimeter of a rectangle with given length and breadth*/

#include <stdio.h>

int main(){
    /*int l,b,p;
    printf("Enter length & breadth : ");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    if () {

    }
    else {

    }
    printf("Perimeter = %d",p);*/


    int l,b;
    printf("Enter length---");
    scanf("%d",&l);
    
    printf("Enter Breath---");
    scanf("%d",&b);

    printf("perimeter %d \n", 2*(l+b));
    printf("area of rectangle----%d", l*b);
    return 0;

}