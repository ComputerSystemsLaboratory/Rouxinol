#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull N,K,A[200000];

int main()
{
    cin>>N>>K;
    for(int i =0 ; i<N; i++){
        cin>>A[i];
    }
    for(ull i = K; i<N; i++){
        if(A[i-K]<A[i]){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
