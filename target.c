#include<stdio.h>
int main(){
    int n,key;
    printf("input array size:");
    scanf("%d",&n);
    int arr[n];
    printf("input array elements:");
    for(int i=0;i<n;i++){
        printf("\ninput %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("input key element:");
    scanf("%d",&key);
    int count =0;
    int i;
    for(i=0;i<n;i++){
        if(key==arr[i]){
            count=1;
            break;
        }
        else 
        count=0;
    }
    if(count==1) printf("successfull search-key element found at position %d index-%d",i+1,i);
    else printf("unsuccessfull search-key element not found");
    return 0;
}
