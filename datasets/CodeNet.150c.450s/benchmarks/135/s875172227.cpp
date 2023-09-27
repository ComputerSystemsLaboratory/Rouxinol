#include<stdio.h>
#include<string.h>

int p[1500000],q[1500000];

int main(){
    while(1){
        int n,m,w[1500],h[1500];
        long lh=0,lw=0,res=0;
        scanf("%d %d",&n,&m);
        if(n==0&&m==0) return 0;
        memset(p,0,sizeof(int)*1500000);
        memset(q,0,sizeof(int)*1500000);
        for(int i=0;i<n;i++) scanf("%d",&h[i]);
        for(int i=0;i<m;i++) scanf("%d",&w[i]);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                lh+=h[j];
                p[lh-1]++;
            }
            lh=0;
        }
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                lw+=w[j];
                q[lw-1]++;
            }
            lw=0;
        }
        for(int i=0;i<1500000;i++) res+=p[i]*q[i];
        printf("%ld\n",res);
    }
}