#include<iostream>
#include<algorithm>
using namespace std;

static const int INFTY = 50000;

int main() {
	int n, m;
	cin >> n >> m;
	int T[n + 1] ,C[m + 1];
	for (int i = 1; i <= n; i++) {
		T[i] = INFTY;
	}
	T[0] = 0;

	for (int i = 1; i <= m; i++) {
		cin >> C[i];
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 0; j + C[i] <= n; j++) { //????????¨???????????§
			T[j + C[i]] = min(T[j + C[i]], T[j] + 1); //C[i]???????????????????????????
		}
	}
	
	cout << T[n] << endl;

	return 0;
}