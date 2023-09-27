#include<cstdio>
int main ()
{
    int n,k,N[100000],ans,sum;
    while(1){
        scanf("%d%d",&n,&k);
        if(n==0&&k==0)break;
        sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&N[i]);
            if(i<k) sum+=N[i];
        }
        ans=sum;
        for(int i=k;i<n;i++){
            sum=sum+N[i]-N[i-k];
            if(ans<sum) ans=sum;
        }
        printf("%d\n",ans);
    }
    return 0;
}