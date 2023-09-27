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


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
	vector<int> A(N);
	REP(i, N) cin >> A[i];
	int res = 0;
	for (int i = 0;i < N;i++) {
		int minj = i;
		for (int j = i + 1;j < N;j++) {
			if (A[minj] > A[j]) {
				minj = j;
			}
		}
		if (i != minj) {
			int tmp = A[i];
			A[i] = A[minj];
			A[minj] = tmp;
			res++;
		}
	}
	REP(i, N) {
		if (i < N - 1) cout << A[i] << " ";
		else cout << A[i] << "\n";
	}
	cout << res << "\n";

	return 0;
}
