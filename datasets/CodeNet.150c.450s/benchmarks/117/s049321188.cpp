#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int merge(vector<int> &A, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] = 1000000001;
	int i = 0, j = 0, cnt = 0;
	for (int k = left; k < right; k++){
		cnt++;
		if (L[i] <= R[j]) A[k] = L[i++];
		else A[k] = R[j++];
	}
	return cnt;
}

int merge_sort(vector<int> &A, int left, int right){
	int sum = 0;
	if (left + 1 < right){
		int mid = (left + right) / 2;
		sum = merge_sort(A, left, mid) + merge_sort(A, mid, right);
		sum += merge(A, left, mid, right);
	}
	return sum;
}

void solve(){
	int n, sum;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	sum = merge_sort(A, 0, n);
	for (int i = 0; i < n; i++){
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl << sum << endl;
}

signed main(){
	solve();
}