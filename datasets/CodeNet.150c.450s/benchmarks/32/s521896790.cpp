#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define INF 1<<30
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int n, a, b;
	while(cin >> n >> a >> b) {
		if(n == 0 && a == 0 && b == 0) break;

		vector<int> v(n);
		rep(i, n) cin >> v[i];
		v.push_back(v[n-1]);

		int ans = 0, id = 0;
		REP(i, a, b + 1) {
			if(ans <= v[i-1] - v[i]) {
				ans = v[i-1] - v[i];
				id = i;
			}
		}

		cout << id << endl;
	}
	return 0;
}