#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)

int sigma(int n){
    return n==1 ? 1 : n+sigma(n-1);
}

int main(){
    int N;
    while(cin>>N,N){
        int cnt=0,i=1;
        while(N-sigma(++i-1)>0){
            if((N-sigma(i-1))%i==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}