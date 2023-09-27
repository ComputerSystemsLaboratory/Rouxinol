#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

#define M 1000000

int odd[M + 10], all[M + 10];

void update(int *a, int x){
    for(int i = x; i <= M; ++i){
        a[i] = min(a[i], a[i - x] + 1);
    }
}

int main(){
    for(int i = 1; i <= M; ++i){
        odd[i] = all[i] = 10000000;
    }

    for(int i = 1; ; ++i){
        int x = i * (i + 1) * (i + 2) / 6;
        if(x > M){ break; }
        update(all, x);
        if(x % 2){ update(odd, x); }
    }

    int n;
    while(cin>>n, n){
        printf("%d %d\n", all[n], odd[n]);
    }
}