#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)

//LIS verified ABC038-D
#define MAX_S 100000
template<typename T> int longest_increasing_subsequence(T s){
	vector<int> dp(MAX_S,INF);
	rep(i,s.size()) *lower_bound(all(dp),s[i]) = s[i];
	
	return lower_bound(all(dp),INF)-dp.begin();
}


int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,n)cin>>v[i];
	
	int res = longest_increasing_subsequence(v);
	cout<<res<<endl;
}