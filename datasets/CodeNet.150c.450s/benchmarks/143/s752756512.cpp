#include <bits/stdc++.h>
#define newl "\n"
using namespace std;
using lli = long long int;
using vvint = vector <vector <int>>;
const int mod = 1e9 + 7;

const int N = 2e5 + 1;

void solve(){
	int n;
	cin >> n;
	vector <int> a(n);
	map <int,int> mp;
	lli summ = 0;
	for(int i = 0;i < n;++i) cin >> a[i], summ = summ + a[i], ++mp[a[i]];
	int q;
	cin >> q;
	while(q--){
		int b,c;
		cin >> b >> c;
		auto itr = mp.find(b);
		if(itr != mp.end()){
			lli count = itr->second;
			summ = summ - count * b + count * c;
			mp.erase(itr);
			mp[c] += count;
		}
		cout << summ << newl;
	}

	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(10);
	#ifdef EXECUTE_LOCALLY
		   freopen("in.txt","r",stdin);
	#endif
	int t = 1;
	//cin >> t;
	while(t--) solve();
	#ifdef EXECUTE_LOCALLY
    	cout << setprecision(3) << "program time: " << (double)clock() / CLOCKS_PER_SEC << newl;
	#endif
	return 0;
}
