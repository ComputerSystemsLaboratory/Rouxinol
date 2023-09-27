#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;
int cnt = 0, n;
int A[500000];

int merge(int f, int l);

int main() {
	cin >> n;
	REP(i, n) cin >> A[i];
	merge(0, n - 1);
	cout << A[0];
	REP(i,n-1) cout << " " << A[i+1];
	cout << endl << cnt << endl;
}

int merge(int f, int l) {
	if (f == l)return 0;
	int mid = (f + l) / 2;
	merge(f, mid);merge(mid + 1, l);
	int lptr = f, rptr = mid + 1;
	int  i = 0;
	vector<int> B;
	while (lptr != mid + 1 || rptr != l+1) {
		if (lptr != mid + 1 && rptr != l + 1) {
			if (A[lptr] > A[rptr]) {
				B.push_back(A[rptr]);
				rptr++;
			}
			else {
				B.push_back(A[lptr]);
				lptr++;
			}
		}
		else if (lptr == mid + 1) {
			B.push_back(A[rptr]);
			rptr++;
		}
		else {
			B.push_back(A[lptr]);
			lptr++;
		}
		cnt++;
	}
	for (int i = f;i <= l;i++) A[i] = B[i-f];
	return 0;
}