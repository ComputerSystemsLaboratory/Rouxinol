#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>

using namespace std;


int main() {
	int n;
	int b[1000];
	int f[1000];
	int r[1000];
	int v[1000];
	int k[1000];
	int room[11][13];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b[i] >> f[i] >> r[i] >> v[i];
	}
	for (int i = 0; i < n; i++) {
		k[i] = (b[i] - 1) * 3 + f[i];
	}
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 12; j++) {
			room[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		room[r[i]][k[i]] += v[i];
	}
	for (int i = 1; i <= 12; i++) {
		if (i % 3==1&&i!=1) cout << "####################"<<endl;
		for (int j = 1; j <= 10; j++) {
			cout << ' ' << room[j][i];
		}
		cout << endl;
	}
	cin >> n;
}