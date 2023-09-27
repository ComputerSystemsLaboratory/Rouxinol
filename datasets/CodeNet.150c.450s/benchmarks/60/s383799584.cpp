#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>

using namespace std;
int main() {
	int n,m,l,p;
	cin >> n;
	bool a[n][n];
	for ( int i = 0;i < n;i++) {
		for(int j= 0; j < n;j++) {
			a[i][j] = 0;
		}
	}
	for (int i = 0;i < n; i++){
		cin >> m;
		cin >> l;
		for(int j = 0; j < l;j++) {
			cin >> p;
			a[m-1][p-1] = 1;
		}
	}
	for ( int i = 0;i < n;i++) {
		for(int j= 0; j < n-1;j++) {
			cout << a[i][j] << " ";
		}
		cout << a[i][n-1] << endl;
	}
}
		