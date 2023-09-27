#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector> 
#include<limits>
#include<numeric>
#include<math.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define in(x) cin >> x
#define out(str) cout << str << endl

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int n,ans;

int main(){
    int N=1000000;
    int prime[N];
    rep(i,N) prime[i] = 1;
    prime[0] = prime[1] = 0;
    rep(i,N){
        if(prime[i]){
            for(int j = i + i; j < N; j+=i){
                prime[j] = 0;
            }
        }
    }
    while(cin>>n){
        ans=0;
        rep(i,n+1)ans+=prime[i];
        out(ans);
    }
}

