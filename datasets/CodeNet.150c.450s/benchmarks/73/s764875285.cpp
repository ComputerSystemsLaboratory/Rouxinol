#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct BIT {
	vector<int> bit;

	BIT(int n) : bit(n+1) {}

	int sum(int i) {
		int s = 0;
		while(i > 0) {
			s += bit[i];
			i -= i & -i;
		}
		return s;
	}

	void add(int i,int x) {
		while(i <= bit.size()) {
			bit[i] += x;
			i += i & -i;
		}
	}
};

int main() {
	int n, q;
	cin >> n >> q;

	BIT bit(n);
	rep(i, q) {
		int a, b, c;
		cin >> a >> b >> c;

		if(a == 0) {
			bit.add(b, c);
		} else {
			cout << bit.sum(c) - bit.sum(b-1) << endl;
		}
	}

	return 0;
}