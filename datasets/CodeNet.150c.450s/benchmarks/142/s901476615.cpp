#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> A(n);
    for(int i=0; i<n; ++i) cin>>A[i];
    deque<int> Q;
    for(int i=0; i<k; ++i) Q.push_back(A[i]);

    for(int i=k; i<n; ++i){
        int f = Q.front();
        Q.pop_front();
        Q.push_back(A[i]);
        if(A[i]>f) cout<<"Yes\n";
        else cout<<"No\n";
    }
}