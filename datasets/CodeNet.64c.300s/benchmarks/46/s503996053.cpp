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
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265

bool d[1000000];

void f(int a,int b,int c){
  int i=0;
  a-=b;
  while(i<c){
    a+=b;
    if(a<=0) continue;
    if(!d[a]) i++;
  }

  cout<<a<<endl;
}

int main(){
  d[0]=d[1]=true;

  for(int i=2;i<1000000;i++){
    if(d[i]) continue;
    for(int j=2;i*j<1000000;j++){
      d[i*j]=true;
    }
  }


  while(1){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0) break;
    f(a,b,c);
  }

  return 0;
}
