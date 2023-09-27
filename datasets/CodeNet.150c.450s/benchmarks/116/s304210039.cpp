#include<stdio.h>
int main(void){
    int n,k;
    int a[100001]={0};
    int i,j;
    int sum;
    int mem=0;
    while(1){
        for(i=0;i<10000;i++){
            a[i]=0;
        }
        scanf("%d%d",&n,&k);
        if(n==0&&k==0){
            break;
        }
        mem=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sum=0;
        for(i=0;i<n;i++){
            if(i<k){
                sum=sum+a[i];
            }
            else if(i>=k){
                sum=sum+a[i];
                sum=sum-a[i-k];
            }
            if(i==k-1){
                mem=sum;
            }
            if(i>=k-1){
                if(mem<sum){
                    mem=sum;
                }
            }
        }
        printf("%d\n",mem);
    }
    return 0;
}