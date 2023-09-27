#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//void solve(){
//	long long n, cnt = 0;
//	cin >> n;
//	vector<int> a(n), b(n);
//	for (int i = 0; i < n; i++) cin >> a[i];
//	b = a;
//	sort(b.begin(), b.end());
//	for (int i = n - 1; i >= 0; i--){
//		vector<int>::iterator iter = find(a.begin(), a.end(), b[i]);
//		int index = distance(a.begin(), iter);
//		a.erase(iter);
//		cnt += i - index;
//	}
//	cout << cnt << endl;
//}

long long merge(vector<int> &A, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] = 1000000001;
	long long i = 0, j = 0, cnt = 0;
	for (int k = left; k < right; k++){
		//cnt++;
		if (L[i] <= R[j]) A[k] = L[i++];
		else {
			cnt += n1 - i;
			A[k] = R[j++];
		}
	}
	return cnt;
}

long long merge_sort(vector<int> &A, int left, int right){
	long long sum = 0;
	if (left + 1 < right){
		int mid = (left + right) / 2;
		sum = merge_sort(A, left, mid) + merge_sort(A, mid, right);
		sum += merge(A, left, mid, right);
	}
	return sum;
}

void solve(){
	long long n, sum;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	cout << merge_sort(A, 0, n) << endl;
}

signed main(){
	solve();
}