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
#define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
#define in(x) cin >> x
#define out(str) cout << str << endl

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int N,mini,ans=0,temp;

int main(){
    cin>>N;
    int A[N];
    rep(i,N)cin>>A[i];
    rep(i,N){
        mini=i;
        repi(j,i+1,N){
            if(A[j]<A[mini])mini=j;
        }
        if(i!=mini){
            temp=A[i];
            A[i]=A[mini];
            A[mini]=temp;
            ans++;
        }
    }
    rep(i,N){
        if(i)cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
    out(ans);
}

