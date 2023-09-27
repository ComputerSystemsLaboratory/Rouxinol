#include<iostream>
#include<climits>
#include<vector>
#include<list>
#include<functional>
#include<algorithm>
#include<string>
#include<cmath>
#include<complex>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

class question {
public:
	int H;
	vector<int> h;
	void ans() {
		cin >> H;
		h.resize(H);
		REP(i, H) cin >> h[i];
		REP(i, H) {
			int key = h[i];
			int parent = i == 0 ? INT_MAX : h[(i - 1) / 2];
			int left = (2 * i + 1 < H) ? h[2 * i + 1] : INT_MAX;
			int right = (2 * i + 2 < H) ? h[2 * i + 2] : INT_MAX;
			cout << "node " << i + 1 << ": key = " << key << ", ";
			if (parent < INT_MAX) cout << "parent key = " << parent << ", ";
			if (left < INT_MAX) cout << "left key = " << left << ", ";
			if (right < INT_MAX) cout << "right key = " << right << ", ";
			cout << "\n";
		}
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	question q;
	q.ans();

	return 0;
}


