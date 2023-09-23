#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<climits>
using namespace std;

#define REP(i,a,n) for(int i = a ; i < n ;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int a,d,n;
bool p[1100000];

void solve(){
}

int main(){
  memset(p,true,sizeof(p));
  p[0] = p[1] = false;
  rep(i,1100000){
    if(p[i]){
      for(int j=i+i;j<=1100000;j+=i){
        p[j] = false;
      }
    }
  }

  while(cin>>a>>d>>n,a||d||n){
    while(1){
      if(p[a]){
        n--;
        if(n == 0) break;
      }
      a += d;
    }
    cout<<a<<endl;
  }
}