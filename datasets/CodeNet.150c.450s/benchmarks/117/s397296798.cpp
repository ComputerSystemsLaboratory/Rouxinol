#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
#define MAX_N (500010)
int A[MAX_N];
int L[(MAX_N >> 1) + 1];
int R[(MAX_N >> 1) + 1];
int cnt = 0;

void merge(int A[], int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	//vector<int> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++) L[i] = A[left + i];
	for (int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] = 1000000001;
	int i = 0, j = 0;
	for (int k = left; k < right; k++){
		cnt++;
		if (L[i] <= R[j]) A[k] = L[i++];
		else A[k] = R[j++];
	}
	//return cnt;
	//vector<int>().swap(L);
	//vector<int>().swap(R);
}

void merge_sort(int A[], int left, int right){
	//int sum = 0;
	if (left + 1 < right){
		int mid = (left + right) / 2;
		//sum = merge_sort(A, left, mid) + merge_sort(A, mid, right);
		//sum += merge(A, left, mid, right);
		merge_sort(A, left, mid);
		merge_sort(A, mid, right);
		merge(A, left, mid, right);
	}
	//return sum;
}

void solve(){
	int n, sum;
	cin >> n;
	//vector<int> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	merge_sort(A, 0, n);
	for (int i = 0; i < n; i++){
		if (i) cout << " ";
		cout << A[i];
	}
	//cout << endl << sum << endl;
	cout << endl << cnt << endl;
}

signed main(){
	solve();
}