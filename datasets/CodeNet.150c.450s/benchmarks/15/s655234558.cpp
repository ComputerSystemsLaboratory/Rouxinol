#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int n, q;

int LinerSearch(int a[], int b[]) {
	int cnt = 0;
	for (int i = 0;i < q;i++) {
		for (int j = 0;j < n;j++) {
			if (b[i] == a[j]) {
				cnt++;
				break;
			}
		}
	}
	return cnt;
}

int main() {
	int S[10004], T[502];
	cin >> n;
	for (int i = 0;i <= n - 1;i++) {
		cin >> S[i];
	}

	cin >> q;
	for (int i = 0;i <= q - 1;i++) {
		cin >> T[i];
	}

	cout << LinerSearch(S, T) << endl;

	return 0;
}