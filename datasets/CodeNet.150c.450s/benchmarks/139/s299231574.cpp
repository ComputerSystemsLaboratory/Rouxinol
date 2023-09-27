#include <bits/stdc++.h>
#define rep(i,n) for(long long i=0; i<n; i++)
#define Rep(i,n) for(long long i=1; i<n; i++)
#define ll long long
#include <math.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <queue>
#include <set>
#include <vector>


using namespace std;
#define PI acos(-1)
using P =pair<ll,ll>;




ll mod=1e9+7;
ll dp[2000+4];

vector<pair<ll,ll>>p;

vector<ll> to[100005];
ll inf =1000000007;
int main()
{
  ll n,m;
  cin>>n>>m;
  rep(i,m){
    ll a,b;
    cin>>a>>b;
    a--;b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<ll>dist(n,inf);
  queue<ll> q;
  q.push(0);
  dist[0]=0;
  vector<ll>pre(n,-1);
  while(!q.empty()){
    ll a=q.front();
    q.pop();
    for(ll x:to[a]){
        if(dist[x]!=inf)continue;
        dist[x]=dist[a]+1;
        pre[x]=a;
        q.push(x);
    }
  }
  cout<<"Yes"<<endl;
  Rep(i,n)cout<<++pre[i]<<endl;
 }

 


 

 


