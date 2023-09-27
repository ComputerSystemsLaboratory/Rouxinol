#include<iostream>
#include <climits>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, q;
	cin >> n >> q;
	queue<string> qu_name;
	map<string,int> mp_time;
	int res = 0;
	REP(i, n) {
		string name;
		cin >> name;
		qu_name.push(name);
		int time;
		cin >> time;
		mp_time[name] = time;
	}
	while (!qu_name.empty()) {
		string name = qu_name.front();
		if (mp_time[name] <= q) {
			res += mp_time[name];
			cout << name << " " << res << "\n";
			qu_name.pop();
		}
		else {
			res += q;
			mp_time[name] -= q;
			qu_name.pop();
			qu_name.push(name);
		}
	}

	return 0;
}
