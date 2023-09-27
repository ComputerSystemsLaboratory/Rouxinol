#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n;cin>>n;
  ll month=0;
  for(int i=1;i<1000;i++){
    if(i%3==0){
      month+=200;
    }else{
      month+=195;
    }
  }
  for(int i=1;i<=n;i++){
    int y,m,d;cin>>y>>m>>d;
    ll ans=0;
    for(int j=1;j<=y-1;j++){
      if(j%3){
	ans+=195;
      }else{
	ans+=200;
      }
    }
    for(int j=1;j<m;j++){
      if(y%3==0){
	ans+=20;
      }else{
	if(j%2)ans+=20;
	else ans+=19;
      }
    }
    ans+=d;
    cout<<month-ans+1<<endl;
  }
  return 0;
}

