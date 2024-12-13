#include<math.h>
#include<stdio.h>
int main(){
    int i,x,rem,count,nod,n,sum;
    for(i=1;i<=1000;i++){
        sum=0;
        count=0;
        n=i;
        x=i;
        while (n>0)
        {
            n=n/10;
            count++;
            
        }
        while(x>0){
        nod=count;
        rem=x%10;
        sum=sum+pow(rem,nod);
        x=x/10;
        }
        if(sum==i){
            printf("%d\t",sum);
        }
        else continue;
        
    }

    return 0;
}