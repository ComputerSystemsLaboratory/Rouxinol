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
 
int N,key,j;
 
int main(){
    cin>>N;
    int A[N];
    rep(i,N){
        cin>>A[i];
        if(i>0)cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
    repi(i,1,N){
        key=A[i];
        j=i-1;
        while(j>=0&&A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        rep(k,N){
            if(k>0)cout<<" ";
            cout<<A[k];
        }
        cout<<endl;
    }
}
