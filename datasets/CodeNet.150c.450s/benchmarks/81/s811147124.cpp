#include<iostream>
#define INF 10000000;
using namespace std;

int main() {
	int towns[10][10]; 
	int n;
	while (1) {
		cin >> n;
		if (!n)break;

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				towns[i][j] = INF;
			}
		}
		for (int i = 0; i < 10; i++) {
			towns[i][i] = 0;
		}
		int biggest_town = 0;
		int a, b, c;
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			if (biggest_town < a)biggest_town = a;
			if (biggest_town < b)biggest_town = b;
			towns[a][b] = c;
			towns[b][a] = c;
		}

		for (int k = 0; k < 10; k++) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (towns[i][j] > towns[i][k] + towns[k][j]) {
						towns[i][j] = towns[i][k] + towns[k][j];
					}
				}
			}
		}
		int start, total_time = 100000;
		for (int i = 0; i <= biggest_town; i++) {
			int tmp = 0;
			for (int j = 0; j <= biggest_town; j++) {
				if (towns[i][j] != 10000000)tmp += towns[i][j];
			}
			if (total_time > tmp) {
				total_time = tmp;
				start = i;
			}
		}
		cout << start << ' ' << total_time << endl;
	}
}
