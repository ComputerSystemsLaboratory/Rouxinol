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
	bool flag = true;
	int res = 0;
	while (flag) {
		flag = false;
		for (int i = N - 1;i > 0;i--) {
			if(A[i-1]>A[i]){
				int tmp = A[i];
				A[i] = A[i - 1];
				A[i - 1] = tmp;
				flag = true;
				res++;
			}
		}
	}
	REP(i, N) {
		if (i < N - 1)cout << A[i] << " ";
		else cout << A[i] << "\n";
	}
	cout << res << "\n";

	return 0;
}
