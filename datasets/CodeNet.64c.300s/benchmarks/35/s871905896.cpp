#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int mp[10000][10000]={};

signed main(){
  int n,u,k;
  cin>>n;
  int ad_m[100][100]={};
  rep(i,n){
    cin>>u>>k;
    rep(j,k){
      int v;
      cin>>v;
      v--;
      ad_m[i][v]+=1;
    }
  }
  rep(i,n){
    rep(j,n){
      cout<<ad_m[i][j];
      if(j<n-1)cout<<' ';
    }
    cout<<endl;
  }


  return 0;

}