#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;

int partition(vector<pair<int, char> > &A, int p, int r){
	int x = A[r].first;
	int i = p - 1;
	for (int j = p; j < r; j++){
		if (A[j].first <= x) swap(A[++i], A[j]);
	}
	swap(A[++i], A[r]);
	return i;
}

void quicksort(vector<pair<int, char> > &A, int p, int r){
	if (p < r){
		int q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

void solve(){
	int n;
	bool stable = true;
	cin >> n;
	map<int, queue<char> > que;
	vector<int> j(12, 0);
	vector<pair<int, char> > A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i].second >> A[i].first;
		que[A[i].first].push(A[i].second);
	}
	quicksort(A, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (que[A[i].first].front() != A[i].second) stable = false;
		else que[A[i].first].pop();
	}
	if (stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (int i = 0; i < n; i++){
		cout << A[i].second << " " << A[i].first << endl;
	}
	//cout << endl;
}

int main(){
	solve();
}