#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		if (i == n - 1) cout << a[i];
		else cout << " " << a[i];
	}
	cout << endl;
}