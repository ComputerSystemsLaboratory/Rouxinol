
#include <iostream>
#include <vector>
#include <string>


using namespace std;

int n, q, A[25];
char t[25][2010];

bool check(int i, int m) {
	if (m == 0) return true;
	if (i >= n) return false;
	if (t[i][m] > 0) return t[i][m] == 2;
	bool res = check(i + 1, m) || check(i + 1, m - A[i]);
	t[i][m] = res ? 2 : 1;
	return res;
}

int main()
{
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> A[i];
	}

	cin >> q;
	for(int i=0;i<q;i++) {
		int m;
		cin >> m;
		if (check(0, m)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}