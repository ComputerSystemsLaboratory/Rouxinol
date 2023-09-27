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

	vector<pair<int, pair<int,int>>>v;
	for (int i = 1; i <= 150; i++) {
		for (int j = i + 1; j <= 150; j++) {
			v.push_back({ i*i + j*j ,{i,j} });
		}
	}
	sort(v.begin(), v.end());
	cin >> H >> W;
	while (H) {
		bool flag = false;
		for (auto i : v) {
			if (flag) {
				cout << i.second.first << " " << i.second.second << endl;
				break;
			}
			if (i.second.first == H&&i.second.second == W) {
				flag = true;
			}
		}
		cin >> H >> W;
	}
	return 0;
}