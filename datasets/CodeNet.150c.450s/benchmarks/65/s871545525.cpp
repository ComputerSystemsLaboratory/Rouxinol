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

void BubbleSort(vector<string> &C, int N) {
	for (int i = 0;i < N - 1;i++) {
		for (int j = N - 1;j > i;j--) {
			if ((int)C[j-1][1] > (int)C[j][1]) {
				string tmp = C[j];
				C[j] = C[j - 1];
				C[j - 1] = tmp;
			}
		}
	}
}

void SelectionSort(vector<string> &C, int N) {
	for (int i = 0;i < N - 1;i++) {
		int minj = i;
		for (int j = i + 1;j < N;j++) {
			if ((int)C[minj][1] > (int)C[j][1]) minj = j;
		}
		if (minj != i) {
			string tmp = C[minj];
			C[minj] = C[i];
			C[i] = tmp;
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
	vector<string> C(N), D(N);
	REP(i, N) {
		cin >> C[i];
		D[i] = C[i];
	}
	BubbleSort(C, N);
	SelectionSort(D, N);
	REP(i, N) {
		if (i < N - 1) cout << C[i] << " ";
		else cout << C[i] << "\n";
	}
	cout << "Stable\n";
	bool sta = true;
	REP(i, N) {
		if (C[i] != D[i]) sta = false;
		if (i < N - 1) cout << D[i] << " ";
		else cout << D[i] << "\n";
	}
	if (sta) cout << "Stable\n";
	else cout << "Not stable\n";
	

	
	return 0;
}
