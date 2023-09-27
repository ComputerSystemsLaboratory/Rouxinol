#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define MAX 1000001
ll prime[MAX];
long long mod;

ll rec(vector<vector<ll> >& dp,vector<ll>& arr,int n,int i,int k,int w)
{
  ll ans=0;
  if(i>=n)
    return 0;

  if(dp[i][k]!=-1)
    return dp[i][k];


  if(k!=0)
  ans=max(rec(dp,arr,n,i+1,w,w),arr[i]+rec(dp,arr,n,i+1,k-1,w));
  else
  ans=max(rec(dp,arr,n,i+1,k,w),rec(dp,arr,n,i+1,w,w));

  return dp[i][k]=ans;

}

ll t[400008];
void build(vector<ll>& a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = max(t[v*2] ,t[v*2+1]);
    }
}

ll maxi(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max(maxi(v*2, tl, tm, l, min(r, tm)) ,maxi(v*2+1, tm+1, tr, max(l, tm+1), r));
}



void update(int v, int tl, int tr, int pos, ll new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = max(t[v*2] ,t[v*2+1]);
    }
}

int main() { 
int n;
ll ans=0;

cin>>n;
unordered_map<ll,ll> h;
int t;
for(int i=0;i<n;i++)
{
  cin>>t;
  h[t]++;
  ans+=t;
}

int q;
cin>>q;

int a,b;
ll temp;
for(int i=0;i<q;i++)
{
  cin>>a>>b;
  h[b]+=h[a];
  ans-=h[a]*a;
  ans+=h[a]*b;
  h[a]=0;
  cout<<ans<<"\n";
}


return 0;
}
