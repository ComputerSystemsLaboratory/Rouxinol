#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int N;

int main(int argc, char const *argv[]) {
	cin >> N;
	int a[3];
	for (int i = 0; i < N; i++) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}