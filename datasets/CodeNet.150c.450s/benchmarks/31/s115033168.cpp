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
	
	int n;
	cin >> n;
	vector<ll> R(n);
	int max = INT_MIN;
	int min = INT_MAX;
	REP(i, n) {
		cin >> R[i];
		if (max < R[i] - min) max = R[i] - min;
		if (min > R[i]) min = R[i];
	}
	cout << max << "\n";

	return 0;
}
