#include "bits/stdc++.h"

using namespace std;

#define int long long
#define ll long long
typedef pair<int, int> P;
#define mod 1000000007
#define INF (1LL<<60)

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl



signed main(){

	set<string> s;

	int n;
	cin >> n;
	while (n--){
		string a, b;
		cin >> a >> b;
		if (a == "insert") s.insert(b);
		else{
			if (s.find(b) != s.end()) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}


	return 0;
}

