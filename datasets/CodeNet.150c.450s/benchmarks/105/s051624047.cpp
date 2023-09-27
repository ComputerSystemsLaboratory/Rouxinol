#include <bits/stdc++.h>
#define rep(i,l,r) for (int i=l,i##end=r;i<=i##end;++i)
#define per(i,r,l) for (int i=r,i##end=l;i>=i##end;--i)
#define rep0(i,r) for (int i=0,i##end=r;i<i##end;++i)
#define pr pair<int,int>
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pb push_back
using namespace std;
const int N=1e6+6;
ll a[N],bs[1000];
void ins(ll x){
    rep(i,0,100)
        if (x>>i&1){
            if (bs[i]) x^=bs[i];
            else bs[i]=x,x=0;
            if (!x) return;
        }
}
bool query(ll x){
    rep(i,0,100)
        if (x>>i&1){
            if (bs[i]) x^=bs[i];
            else return true;
            if (!x) return false;
        }
    return false;
}
int main(){
    int T; scanf("%d",&T);
    while (T--){
        int n; scanf("%d",&n);
        rep(i,1,n) scanf("%lld",&a[i]);
        static char s[N]; scanf("%s",s);
        rep(i,0,100) bs[i]=0; bool f=false;
        per(i,n,1)
            if (s[i-1]=='0') ins(a[i]);
            else if (s[i-1]=='1'&&query(a[i])){ f=true; break; }
        if (!f) printf("0\n");
        else printf("1\n");
    }
    return 0;
}
