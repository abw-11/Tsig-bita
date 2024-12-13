#include<stdio.h>
int main(){
    int n;
    printf("input limit value for fibonacci series: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum=0;
    int i=1;
    if(n>=0){ printf("0\t");
    for(int i=1;i<n;i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("%d\t",sum);
    }
    }
    else printf("invalid input");
    return 0;
}