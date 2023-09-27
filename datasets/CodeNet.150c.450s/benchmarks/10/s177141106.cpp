// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int room[5][4][11] = { 0 };
	int b, f, r, v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		room[b][f][r] += v;
	}

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 3; j++) {
			for (int k = 1; k <= 10; k++) {
				cout << " " << room[i][j][k];
			}
			cout << endl;
		}
		if(i!=4)
		cout << "####################" << endl;
	}
	return 0;
}

