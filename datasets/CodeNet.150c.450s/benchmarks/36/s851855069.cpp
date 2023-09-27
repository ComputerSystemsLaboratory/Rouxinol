#include<cstdio>
int main(){
    int d;
    while(~scanf("%d",&d)){
        int ans=0;
        for(int i=d;i<=600-d;i+=d){
            ans+=i*i*d;
        }
        printf("%d\n",ans);
    }
}