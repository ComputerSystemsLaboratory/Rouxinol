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

	cin >> W>>H;
	while (H) {
		N = 0;
		vector<vector<int>>field(H + 2, vector<int>(W + 2, 0));
		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= W; j++) {
				cin >> field[i][j];
			}
		}
		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= W; j++) {
				queue<pair<int, int>>Q;
				if (field[i][j]) {
					field[i][j] = 0;
					Q.push({ i,j });
					N++;
					while (!Q.empty()) {
						int cy = Q.front().first;
						int cx = Q.front().second;
						//cout << N << " " << cy << " " << cx << endl;
						Q.pop();
						
						for (int k = -1; k <= 1; k++) {
							for (int l = -1; l <= 1; l++) {
								if (field[cy + k][cx + l]) {
									field[cy + k][cx + l] = 0;
									Q.push({ cy + k,cx + l });
								}
							}
						}
					}
				}
			}
		}
		cout << N << endl;
		cin >> W >> H;
	}
	return 0;
}