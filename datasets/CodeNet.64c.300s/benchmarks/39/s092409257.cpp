#include<cstdio>

int main(){

    int n;

    while(scanf("%d",&n)!=EOF){
        int ans=0;
        for(int i=0;i<10;i++)for(int j=0;j<10;j++)for(int k=0;k<10;k++)for(int l=0;l<10;l++)if(i+j+k+l==n)ans++;
    printf("%d\n",ans);
    }

    return 0;
}