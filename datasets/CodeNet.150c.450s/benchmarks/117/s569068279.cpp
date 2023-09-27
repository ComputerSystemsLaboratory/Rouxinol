#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

using namespace std;

int cnt = 0;

void merge(vector<int>& A, int left, int mid, int right) {
	int length = right - left;
	int* temporary = new int[length];
	int l = left,
		r = mid,
		k = 0; // indexes for first half,second half,new array
	for (int i = 0; i < length; ++i) {
		
		if (l < mid&&r < right) {
			if (A[l] < A[r]) {
				cnt++;
				temporary[k] = A[l];
				l++;
				k++;
			}
			else {
				cnt++;
				temporary[k] = A[r];
				r++;
				k++;
			}
		}
		else if (l == mid) {
			cnt++;
			temporary[k] = A[r];
			r++;
			k++;
		}
		else {
			cnt++;
			temporary[k] = A[l];
			l++;
			k++;
		}

	}
	for (int i = 0; i < length; ++i) {
		A[left + i] = temporary[i];
	}
	delete[] temporary;
}

void mergeSort(vector<int>& A, int left, int right) { //call this as(v,0,n)
	if (right - left == 1) return;

	int mid = right - (right - left) / 2;
	mergeSort(A, left, mid);
	mergeSort(A, mid, right);
	merge(A, left, mid, right);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> v(n);
	REP(i, n) {
		cin >> v[i];
	}
	mergeSort(v, 0, n);
	REP(i, n) {
		cout << v[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}
	cout << cnt << endl;
	return 0;
}