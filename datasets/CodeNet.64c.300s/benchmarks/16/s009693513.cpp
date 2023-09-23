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

int mini=2e9,ans=-2e9-1,N;

int main(){
    cin>>N;
    int R[N];
    rep(i,N){
        cin>>R[i];
        ans=max(ans,R[i]-mini);
        mini=min(mini,R[i]);
    }
    out(ans);
}

