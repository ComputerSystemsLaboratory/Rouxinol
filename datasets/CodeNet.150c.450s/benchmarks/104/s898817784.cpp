#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define MAX 100005
#define int long long
using namespace std;

const int MOD=1000000007;
const int INF=1000000009;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};



signed main(){
  int w,n;
  cin>>w>>n;
  int a[33];
  rep(i,w)a[i]=i;
  rep(i,n){
    int x,y;
    char e;
    cin>>x>>e>>y;
    x--;y--;
    swap(a[x],a[y]);
  }
  rep(i,w){
    cout<<a[i]+1<<endl;
  }

  return 0;
}