#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll c[30],s[370][30];
int a[370],last[30];

unsigned seed=chrono::steady_clock::now().time_since_epoch().count();
mt19937 rng(seed);

void f(int d)
{
    ll x=0;
    memset(last,-1,sizeof(last));
    for(int i=0;i<d;i++){
        x+=s[i][a[i]];
        last[a[i]]=i;
        for(int j=0;j<26;j++){
            x-=c[j]*(ll)(i-last[j]);
        }
        printf("%lld\n",x);
    }
}

int main()
{
    auto start=chrono::high_resolution_clock::now();
    int d;
    scanf("%d",&d);
    for(int i=0;i<26;i++){
        scanf("%lld",&c[i]);
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++){
            scanf("%lld",&s[i][j]);
        }
    }
    for(int i=0;i<d;i++){
        scanf("%d",&a[i]);
        a[i]--;
    }
    f(d);
    return 0;
}