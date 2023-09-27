
#include"iostream"
using namespace std;
int main() {
	while (1) {
		int n, m, t[100], h[100], sumt = 0, sumh = 0, mint = 101, minh = 101;
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> t[i];
			sumt += t[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> h[i];
			sumh += h[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (sumt - t[i] + h[j] == sumh - h[j] + t[i]) {
					if (h[j] + t[i] < mint + minh) {
						mint = t[i];
						minh = h[j];
					}
				}
			}
		}
		if (mint == 101 && minh == 101)cout << "-1" << endl;
		else cout << mint << " " << minh << endl;
	}
	return 0;
}


