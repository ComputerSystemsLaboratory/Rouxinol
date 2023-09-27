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

long long int merge(int f, int l);

int main() {
	cin >> n;
	REP(i, n) cin >> A[i];
	cout << merge(0, n - 1) << endl;
	return 0;
}

long long int merge(int f, int l) {
	if (f == l)return 0;
	long long int mid = (f + l) / 2,T1,T2,T=0;
	T1=merge(f, mid);T2=merge(mid + 1, l);
	int lptr = f, rptr = mid + 1;
	int  i = 0;
	vector<int> B;
	while (lptr != mid + 1 || rptr != l+1) {
		if (lptr != mid + 1 && rptr != l + 1) {
			if (A[lptr] > A[rptr]) {
				B.push_back(A[rptr]);
				rptr++; T += mid + 1 - lptr;
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
	}
	for (int i = f;i <= l;i++) A[i] = B[i-f];
	return T1+T+T2;
}