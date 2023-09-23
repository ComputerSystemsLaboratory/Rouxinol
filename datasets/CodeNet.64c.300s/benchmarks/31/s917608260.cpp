#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int a[35] = {0};
	for (int i = 1; i <= 28; i++) {
		cin >> n;
		a[n] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (!a[i]) cout << i << endl;
	}
}

