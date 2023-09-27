#include<iostream>
using namespace std;
#define max 100
#define infty 1<<21

int n;
int d[max];
int aa[max][max];
int color[max];

void soya() {
	d[0] = 0;
	while (1) {
		int x = infty;
		for (int i = 0; i < n; i++) {
			if (x != infty) {
				if (d[i] < d[x] && color[i] != 2) {
					x = i;
				}
			}
			else {
				if (d[i] < x && color[i] != 2) {
					x = i;
				}
			}
		}

		if (x == infty) break;
		else {
			color[x] = 2;
			for (int i = 0; i < n; i++) {
				if (aa[x][i] != -1 && d[x] + aa[x][i] < d[i]) {
					d[i] = d[x] + aa[x][i];
				}
			}
		}
	}
}

int main() {
	for (int i = 0; i < max; i++) {
		color[i] = 0;
		d[i] = infty;
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			aa[i][j] = -1;
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		int id;
		int k;
		cin >> id >> k;
		for (int j = 0; j < k; j++) {
			int num1;
			int kyori;
			cin >> num1 >> kyori;
			aa[id][num1] = kyori;
		}
	}

	soya();

	for (int i = 0; i < n; i++) {
		cout << i << " " << d[i] << endl;
	}

	return 0;
}
