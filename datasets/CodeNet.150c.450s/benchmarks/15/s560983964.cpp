#include <iostream>
#include <algorithm>

using namespace std;

bool Bsearch(int key, int A[], int len) {
	int l = 0, r = len - 1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (A[mid] > key)
			r = mid - 1;
		else if (A[mid] < key)
			l = mid + 1;
		else
			return true;
	}
	return false;
}

int main() {
	int n, *S;
	int q, *T;
	int ans = 0;
	cin >> n;
	S = new int[n];
	for (int i = 0; i < n; i++)
		cin >> S[i];
	cin >> q;
	T = new int[q];
	for (int i = 0; i < q; i++)
		cin >> T[i];

	sort(S, S + n);
	for (int i = 0; i < q; i++)
		if (Bsearch(T[i], S, n) == true)
			ans++;
	cout << ans << endl;

	delete[] S;
	delete[] T;
	return 0;
}