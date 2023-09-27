#include "bits/stdc++.h"
using namespace std;
#define dbg(var) cout<<#var<<"="<<var<<" "
#define nl cout<<"\n"
#define fr(i,n) for(int i=0;i<n;i++)
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fa(v) for(auto &i:v)
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define int long long
const int N =  2e4 + 10;
int cnt[2*N];
int32_t main()
{
	fast;
 int n; cin >> n; 
 vi s;
 auto gt = [](int x){return x*x;};
 rep(i,1,10000){
 	rep(j,1,10000){
 		rep(k,1,10000){
 			int val = gt(i)+gt(j)+gt(k)+i*j + j*k + k*i;
 			if(val>n) break;
 		    s.emplace_back(val);
 		}
 	}
 } 
 for(int x: s) cnt[x] ++;
 rep(i,1,n) cout << cnt[i] << "\n";
}