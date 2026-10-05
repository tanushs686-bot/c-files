#include <stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter number---:");
    scanf("%d",&n);

    while (i<n){
        printf("%d\n",n-i);
        i++;
    }
    printf("Liftoff!");
}