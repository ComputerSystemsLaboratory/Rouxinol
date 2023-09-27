#include <iostream>
#include <vector>
#include <numeric>
#include <map>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int w, n; cin >> w >> n;
	vector<int> A(w);
	iota(A.begin(), A.end(), 1);
	for (int i = 0; i < n; i++) { int a, b; char c; cin >> a >> c >> b; swap(A[a - 1], A[b - 1]); }
	for (int i = 0; i < w; i++) cout << A[i] << endl;
}