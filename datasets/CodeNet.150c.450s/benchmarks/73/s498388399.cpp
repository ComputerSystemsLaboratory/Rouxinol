#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

class RangeSumQuery {
private:
	vector<int> num;
	vector<int> st;
	vector<int> rangeSum;
public:
	RangeSumQuery(vector<int> v) {
		num = v;
		double root = sqrt(num.size());

		double cnt = 0;
		for (int i = 0; i < root; i++, cnt += root) {
			st.push_back((int)floor(cnt));
		}
		st.push_back(num.size() + 1);

		for (int i = 0; i < st.size() - 1; i++) {
			int now = st[i];
			int next = st[i + 1];
			int sum = 0;
			for (int j = now; j < next; j++) {
				sum += num[j];
			}
			rangeSum.push_back(sum);
		}
	}

	void add(int x, int y) {
		num[x] += y;
		
		int low = 0;
		int high = st.size() - 1;
		int mid = (high + low) / 2;
		while (high - low > 1) {
			if (x < st[mid]) {
				high = mid;
			} else {
				low = mid;
			}
			mid = (high + low) / 2;
		}

		rangeSum[mid] += y;
	}

	int getSum(int s, int t) {
		int sum = 0;
		for (int i = 0; i < st.size() - 1; i++) {
			int now = st[i];
			int next = st[i + 1];

			if (next <= s) continue;

			if (t < now) break;

			if (s <= now && next <= t) {
				sum += rangeSum[i];
				continue;
			}

			int a = max(now, s);
			int b = min(next - 1, t);
			for (int j = a; j <= b; j++) {
				sum += num[j];
			}
		}

		return sum;
	}
};

signed main() {
	int n, q;
	cin >> n >> q;

	auto rsq = RangeSumQuery(vector<int>(n, 0));

	rep(i, q) {
		int com, x, y;
		cin >> com >> x >> y;

		if (com == 0) {
			x--;
			rsq.add(x, y);
		} else {
			x--; y--;
			cout << rsq.getSum(x, y) << endl;
		}
	}

    return 0;
}