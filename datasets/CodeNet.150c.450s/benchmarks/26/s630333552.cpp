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
  int a,b;
  cin>>a>>b;
  if(a<b)cout<<"a < b"<<endl;
  else if(a>b)cout<<"a > b"<<endl;
  else cout<<"a == b"<<endl;


  return 0;
}