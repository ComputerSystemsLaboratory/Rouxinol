#include <cstdio>

int m,nmin,nmax;
int P[205];
int diff[205];

int main(){

    while(scanf("%d%d%d",&m,&nmin,&nmax)&&m&&nmin&&nmax){
        for(int i=1;i<=m;i++) scanf("%d",P+i);
        for(int i=1;i<=m-1;i++) diff[i]=P[i]-P[i+1];

        int ans=nmax,difference=diff[ans];
        for(int i=nmax;i>=nmin;i--)
            if (diff[i]>difference) ans=i,difference=diff[i];

        printf("%d\n",ans);
    }


    return 0;
}
