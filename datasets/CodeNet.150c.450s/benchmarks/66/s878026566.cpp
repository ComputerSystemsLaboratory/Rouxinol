#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<climits>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<bitset>
#include<iomanip>
using namespace std;

#define rep(i,j,n) for(int i=(j);i<(n);i++)
#define rep2(i,j,n) for(int i=(j);i<=(n);i++)
#define all(i) i.begin(),i.end()

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef pair<int, int> pi;
typedef long long i64;

int main() {
	int n;
	cin >> n;
	set<string> st;
	rep(i, 0, n) {
		string s;
		cin >> s;
		st.insert(s);
	}
	int m;
	cin >> m;
	vs t(m);
	rep(i, 0, m) {
		cin >> t[i];
	}
	bool open = false;
	rep(i, 0, m) {
		if (st.count(t[i])) {
			if (!open) {
				cout << "Opened by ";
				open = true;
			}
			else {
				cout << "Closed by ";
				open = false;
			}
		}
		else {
			cout << "Unknown ";
		}
		cout << t[i] << endl;
	}
	return 0;
}
