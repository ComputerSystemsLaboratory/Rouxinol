#include<iostream>
using namespace std;

int ExhaustiveSearch(int n,int i,int A[],int m) {
	
	if (m == 0) return 1;
	if (i >= n) return 0;
	int res = ExhaustiveSearch(n, i + 1, A, m) || ExhaustiveSearch(n, i + 1, A, m - A[i]);

	return res;

}
int main() {

	int A[10000],n,q,m,i;

	cin >> n;
	for (i = 0; i < n; i++) cin >> A[i];
		cin >> q;
	for (i = 0; i < q; i++) {
		cin >> m;

		if (ExhaustiveSearch(n, 0, A, m)) cout << "yes" << endl;
		else cout << "no" << endl;
	}



	
}