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


void f(int h,int w){

  int x =h*h+w*w;
  vector<pair<int,P> > v;;
  FOR(i,1,150){
    FOR(j,i+1,150){
      int y = i*i+j*j;
      if(x<y||x==y&&h<i){
        v.push_back(make_pair(y,P(i,j)));
      }
    }
  }
  sort(all(v));

  cout<<v[0].second.first<<' '<<v[0].second.second<<endl;


}

int main(){
  while(1){
    int h,w;
    cin>>h>>w;
    if(h==0) break;
    f(h,w);
  }

  return 0;
}
