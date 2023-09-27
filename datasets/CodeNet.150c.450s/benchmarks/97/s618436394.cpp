#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "iomanip"
#include "random"

using namespace std;

const long long int MOD = 1000000007;
const long double EPS = 0.00000001;
const long double PI = 3.1415926535897932384626433;

long long int N, M, K, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	while (N) {
		vector<int>y(N);
		vector<int>x(N);
		int ymin = 0;
		int ymax = 0;
		int xmin = 0;
		int xmax = 0;
		for (int i = 1; i < N; i++) {
			cin >> L >> R;
			if (R == 0) {
				y[i] = y[L];
				x[i] = x[L] - 1;
			}
			if (R == 1) {
				y[i] = y[L]-1;
				x[i] = x[L];
			}
			if (R == 2) {
				y[i] = y[L];
				x[i] = x[L] + 1;
			}
			if (R == 3) {
				y[i] = y[L]+1;
				x[i] = x[L];
			}
			ymax = max(ymax, y[i]);
			ymin = min(ymin, y[i]);
			xmax = max(xmax, x[i]);
			xmin = min(xmin, x[i]);
		}
		cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
		cin >> N;
	}
	return 0;
}