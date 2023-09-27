#include <cstdio>
#include <algorithm>
#define M 86401
using namespace std;

int main(){
    int i,n,v,tf,tt,h,m,s,l[M];
    while(1){
        scanf("%d",&n);
        if(!n){break;}
        fill(l,l+M,0);v=0;
        for(i=0;i<n;i++){
            scanf("%d:%d:%d",&h,&m,&s);
            tf=h*3600+m*60+s;
            scanf("%d:%d:%d",&h,&m,&s);
            tt=h*3600+m*60+s;
            l[tf]++;
            l[tt]--;
        }
        for(i=1;i<M;i++){
            l[i]+=l[i-1];
        }
        for(i=0;i<M;i++){
            v=max(v,l[i]);
        }
        printf("%d\n",v);
    }
    return 0;
}



