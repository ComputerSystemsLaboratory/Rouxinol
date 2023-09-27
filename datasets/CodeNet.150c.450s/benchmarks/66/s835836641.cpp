#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

typedef long long ll;
const ll INF = 1000000000000000000ll;
const ll MOD = 1000000007ll;
const double EPS = 1e-8;

int main(void) {
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n;
	cin >> n;
	map<string, bool> u;
	for(int i=0; i<n; i++){
		string t;
		cin >> t;
		u[t] = false;
	}

	int m;
	cin >> m;
	bool f = false;
	for(int i=0; i<m; i++){
		string t;
		cin >> t;
		if(u.find(t) == u.end()){
			cout << "Unknown " << t << endl;
		}else if(f == false){
			cout << "Opened by " << t << endl;
			f = true;
		}else{
			cout << "Closed by " << t << endl;
			f = false;
		}
	}
	
	return 0;
}