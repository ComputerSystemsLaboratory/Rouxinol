#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

void solve(){
}

int main(){
  int n,m;

  while(cin>>n>>m,n||m){
    int a[n];
    int b[m];
    int sumA=0,sumB=0;
    rep(i,n){
      cin>>a[i];
      sumA += a[i];
    }
    rep(i,m){
      cin>>b[i];
      sumB += b[i];
    }

    int ansA=99999999,ansB=99999999;
    rep(i,n){
      rep(j,m){
        if(sumA - a[i] + b[j] == sumB - b[j] + a[i] && a[i] + b[j] < ansA + ansB){
          ansA = a[i];
          ansB = b[j];
        }
      }
    }

    if(ansA != 99999999){
      cout<<ansA<<" "<<ansB<<endl;
    }
    else{
      cout<<"-1\n";
    }
  }
}