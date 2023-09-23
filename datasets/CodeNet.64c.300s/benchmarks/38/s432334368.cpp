#include <iostream>
#include <algorithm>

using namespace std;

int a[11];

bool dfs(int I, int A, int B) {
	if (I == 10) return true;
	if (a[I] > A) {
		if (dfs (I + 1, a[I], B)) {
			return true;
		}
	}
	if (a[I] > B) {
		if (dfs(I + 1, A, a[I])) {
			return true;
		}
   	}
   	return false;
}

int main () {
	int T;
	cin >> T; 
	while (T--) {
		for (int i=0; i<10; i++) {
			cin >> a[i];
		}
		if (dfs(0,0,0)) {
			cout << "YES" <<endl;
		}
		else cout << "NO" <<endl;
	}
	return 0;
}