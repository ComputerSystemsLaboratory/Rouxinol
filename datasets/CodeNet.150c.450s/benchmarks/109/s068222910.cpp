#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define RFOR(i,m,n) for(int i=m;i>=n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265

int g(string s){

  int h = (s[0]-'0')*10+s[1]-'0';
  h *=3600;
  int m = (s[3]-'0')*10+s[4]-'0';
  m *=60;
  int t = (s[6]-'0')*10+s[7]-'0';

  return (h+m+t);
}

void f(int n){
  int c[1000000]={};
  rep(i,n){
    string a,b;
    cin>>a>>b;
    int t = g(a);
    int r = g(b);
    c[t]++;
    c[r]--;
  }
  rep(i,1000000){
    if(i==0) continue;
    c[i]+=c[i-1];
  }
  int ans = 0;
  rep(i,1000000){
    ans = max(ans,c[i]);
 } 


    cout<<ans<<endl;
}


int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    f(n);
  }

  return 0;
}

