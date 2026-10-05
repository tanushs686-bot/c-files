#include <stdio.h>
int main(){
    int count=0,sum=0,n;
    
    printf("Enter a number (0 to stop):");
    scanf("%d",&n);

    while (n!=0){
        printf("Enter a number (0 to stop):");
        scanf("%d",&n);
        count++;
        sum=n+sum;
    }

    printf("sum:%d\n",sum);
    printf("count:%d\n",count);
    printf("average:%.4f\n",(float)(sum)/count);


    return 0;
}