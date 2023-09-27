#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    int N;
    cin>>N;
    vector<int> howmany(100001);
    ll sum=0;
    for (int i = 0; i < N; i++){
        int A;cin>>A;
        howmany[A]++;
        sum+=A;
    }
    int Q;
    cin>>Q;
    for (int i = 0; i < Q; i++){
        int B,C; cin>>B>>C;
        sum+=(ll)(C-B)*howmany[B];
        cout<<sum<<endl;
        howmany[C]+=howmany[B];
        howmany[B]=0;
    }
}