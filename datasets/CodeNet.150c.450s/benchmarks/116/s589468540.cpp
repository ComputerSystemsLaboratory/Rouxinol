#include<bits/stdc++.h>
using namespace std;

int N,K;
int a[100001];

void solve(){
    for(int i=0;i<N;i++){
        scanf("%d",&a[i+1]);
        a[i+1]+=a[i];
    }
    int ma=0;
    for(int i=K;i<=N;i++)ma=max(ma,a[i]-a[i-K]);
    printf("%d\n",ma);
}
int main(){
    while(scanf("%d%d",&N,&K),N||K)solve();
}