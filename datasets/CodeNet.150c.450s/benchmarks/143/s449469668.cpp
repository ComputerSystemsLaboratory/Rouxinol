#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;
using pii = pair<int,int>;
ll MOD=1000000007;
const double PI = acos(-1);

int main(){
  int n; cin>>n;
  vector<int>V(100005,0);
  ll sum = 0;
  rep(i,n){
    int a; cin>>a;
    V[a]++;
    sum += a;
  }
  int q; cin>>q;
  rep(i,q){
    int b,c; cin>>b>>c;
    sum += (c-b)*V[b];
    V[c] += V[b];
    V[b] = 0;
    cout << sum << endl;
  }
}