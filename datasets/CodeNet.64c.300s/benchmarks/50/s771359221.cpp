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

int N,ans=0,temp;

int main(){
    cin>>N;
    int A[N];
    rep(i,N)cin>>A[i];
    rep(i,N){
        for(int j=N-1;j>0;j--){
            if(A[j]<A[j-1]){
                temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
                ans++;
            }
        }
    }
    rep(i,N){
        if(i>0)cout<<" ";
        cout<<A[i];
    }
    cout<<"\n";
    out(ans);
}

