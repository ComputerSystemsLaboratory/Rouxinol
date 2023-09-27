#include <iostream>
using namespace std;

int solve (int n, int p);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, p, mayor;
	while (cin >> n >> p, n | p) {
		mayor = solve(n, p);
		cout << mayor << endl;
	}

	return 0;
}

int check (int a[], int n, int p) {
	for (int i = 0; i < n; i++) if (a[i] == p) return i;
	return -1;
}

int solve (int n, int p) {
	int a[n], bowl = p, m_num;

	for (int j = 0; j < n; j++) a[j] = 0;

	while (1) {
		for (int i = 0; i < n; i++) {
			if (bowl == 0) {
				bowl = a[i]; 
				a[i] = 0;
			} else {
				bowl--; 
				a[i]++;
			}	
			if (bowl == 0 && (m_num = check(a, n, p)) != -1) goto SKIP;
		}
	}
	SKIP:
	return m_num;
}