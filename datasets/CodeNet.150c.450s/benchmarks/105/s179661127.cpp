#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define F first
#define S second
#define all(v) (v).begin(),v.end()
#define np next_permutation
using namespace std;
using vi=vector<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,j,n) for(int i=j;i<=n;i++)
#define vii vector<vi>
#define vb vector<bool>
#define pr pair<int,int>
#define vl vector<ll>
#define eb emplace_back
#define umap unordered_map<ll,int>
const int N=(int)1e5+11;

int n,t;
string s;

void solve(){
   cin>>n;
   vl a(n);
   for(int i=0;i<n;i++)
       cin>>a[i];
   cin>>s;
   vl b;
   for(int i=n-1;i>=0;i--){
      ll v=a[i];
      for(auto x:b){
        if(v > (v^x))
           v=v^x;
      }
      if(v){
           if(s[i]=='1'){
             cout<<1<<"\n";
             return;
           }
           b.pb(v);
      }
   }
   cout<<0<<"\n";
}
int main(){ 
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin>>t;
   while(t--) solve();
   return 0;
}
