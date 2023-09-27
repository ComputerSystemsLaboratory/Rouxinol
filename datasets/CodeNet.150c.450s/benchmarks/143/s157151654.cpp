#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int NUM=100002;

int main(){
    int N;
    cin >> N;
    int A[N];
    rep(i, N) cin>>A[i];
    int Q;
    cin >> Q;
    int B[Q], C[Q];
    rep(i, Q) cin>>B[i]>>C[i];

    ll num[NUM]={0};
    rep(i, N) num[A[i]]++;
    ll sum=0;
    rep(i, NUM) sum+=i*num[i];

    rep(i, Q){
        sum-=num[B[i]]*B[i];
        sum+=num[B[i]]*C[i];
        num[C[i]]+=num[B[i]];
        num[B[i]]=0;
        cout<<sum<<endl;
    }
    return 0;
}