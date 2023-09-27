#include<cstdio>
int main(){
    int d;
    while(scanf("%d",&d)!=-1){
        int ans=0;
        int upto=600-d;
        for(int i=d;i<=upto;i+=d){
            ans+=(i*i)*d;
        }
        printf("%d\n",ans);
    }
}