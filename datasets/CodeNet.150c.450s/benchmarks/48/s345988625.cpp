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
		M = INT_MAX;
		for (int i = 0; i <= 100; i++) {
			for (int j = 0; j < 1000; j++) {
				if (N - i*i*i - j*j >= 0) {
					M = min(M, i + j + N - i*i*i - j*j);
				}
			}
		}
		cout << M << endl;
		cin >> N;
	}
	return 0;
}