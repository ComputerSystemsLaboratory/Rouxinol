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
#define all(v) (v).begin(),(v).end()
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

signed main(){
  int n;
  cin>>n;
  int d=100000;
  rep(i,n){
    d*=1.05;
    if(d%1000!=0){
      d=d-(d%1000)+1000;
    }
  }
  cout<<d<<endl;
  return 0;
}