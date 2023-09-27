#include <stdio.h>
#include <queue>
using namespace std;
struct rmq{
    int n;
    int l;
    int r;
};
struct two{
    int n;
    int t;
};
rmq b[1000000];
two a[1000000];
void init(int l,int r,int now){
    b[now].l=l;
    b[now].r=r;
    b[now].n=0;
    if(r==l){
        a[r].t=now;
        return;
    }
    int mid=(l+r)/2;
    init(l,mid,now*2);
    init(mid+1,r,now*2+1);
}
void maintain(int now){
    if(b[now].r==b[now].l)b[now].n=a[b[now].l].n;
    else b[now].n=b[now*2].n+b[now*2+1].n;
    if(now>1)maintain(now/2);
}
int dp(int now,int l,int r){
    if(b[now].l>=l&&b[now].r<=r)return b[now].n;
    else if(b[now].l>r||b[now].r<l){
        return -1;
    }
    int a,b;
    a=dp(now*2,l,r);
    b=dp(now*2+1,l,r);
    if(a<0&&b<0)return -1;
    if(a<0)return b;
    if(b<0)return a;
    return a+b;
}
int main(){
    int n,q,temp,x,y;
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++)a[i].n=0;
    init(1,n,1);
    for(int i=0;i<q;i++){
        scanf("%d%d%d",&temp,&x,&y);
        if(temp==0){
            a[x].n+=y;
            maintain(a[x].t);
        }
        else{
            printf("%d\n",dp(1,x,y));
        }
    }
}