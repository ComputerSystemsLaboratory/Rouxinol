#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			cout << " " << i;
		}
		else {
			while (x) {
				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}
				x /= 10;
			}
		}
	}
	cout << endl;
}