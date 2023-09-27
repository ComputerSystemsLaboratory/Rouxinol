#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int partition(vector<int> &A, int p, int r){
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++){
		if (A[j] <= x) swap(A[++i], A[j]);
	}
	swap(A[++i], A[r]);
	return i;
}

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	int x = partition(A, 0, n - 1);
	for (int i = 0; i < n; i++){
		if (i) cout << " ";
		if (i == x) cout << "[" << A[i] << "]";
		else cout << A[i];
	}
	cout << endl;
}

int main(){
	solve();
}