#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define int long long
#define MAX 2000006
#define NIL -1
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


signed main(){
  int n;
  cin>>n;
  map<string,bool> mp;
  rep(i,n){
    string s,t;
    cin>>s>>t;
    if(s=="insert"){
      mp[string(t)]=true;
    }
    else{
      if(mp[string(t)])cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  }
  return 0;
}