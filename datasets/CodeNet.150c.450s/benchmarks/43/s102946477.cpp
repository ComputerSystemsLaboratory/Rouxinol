#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)

using namespace std;

int main(){
    while(true){
    int n;
    scanf("%d", &n);
    if(n==0) return 0;
    vector<int> a(n), b(n);
    REP(i, n)  scanf("%d %d", &a[i],&b[i]);
    int as=0, bs=0;
    REP(i,n){
        if(a[i]>b[i])as+=a[i]+b[i];
        else if(a[i]<b[i])bs+=a[i]+b[i];
        else {as+=a[i];bs+=b[i];}
    }
    printf("%d %d\n", as,bs);
    }
}