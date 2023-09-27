#include <stdio.h>
int main(){
    int n,k,a[1000000],top,sum;
    while(1){
        scanf("%d%d",&n,&k);
        if(n==0)return 0;
        sum=0;
        for(int i=0;i<k;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        top=sum;
        for(int i=k;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            sum-=a[i-k];
            if(sum>top)top=sum;
        }
        printf("%d\n",top);
    }
}