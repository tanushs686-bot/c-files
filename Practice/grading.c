#include <stdio.h>

int main() {
    int m;
    printf("Enter ur marks \n");
    scanf("%d",&m);

    if ( m<60) {
        printf("Ur grade---  F\n");
    } else if ( 60<=m && m<70) {
        printf("Ur grade---  D\n");
    } else if ( 70<=m && m<80) {
        printf("Ur grade---  C\n");
    } else if ( 80<=m && m<90) {
        printf("Ur grade---  B\n");
    } else if ( 90<=m && m<=100) {
        printf("Ur grade---A  \n");
    } else {
        printf( "Invalid marks");
    }


    return 0 ;
}