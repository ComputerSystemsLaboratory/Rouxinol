#include <bits/stdc++.h>
using namespace std;

int N;
int arr[10005];

int f(int x, int y, int z) {
	
	return x*x+y*y+z*z+x*y+x*z+y*z;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin >> N;
	for(int i = 1; i <= 100; i++) {
		for(int j= 1; j <= 100; j++) {
			for(int k = 1; k <= 100; k++) {
				int p = f(i, j, k);
				if(p <= 10000) {
					arr[p]++;
				}
			}
		}
	}
	for(int i = 1; i <= N; i++) {
		if(arr[i] == 0) cout << "0\n";
		else {
			cout << arr[i] << "\n";
		}
	}
}