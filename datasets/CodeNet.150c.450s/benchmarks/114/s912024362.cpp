#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 114514

int x[10000][10000];
int color[10000];
int MIN[10000];
int sum;
int sum_min = INF;

int main() {
	int n, a, b, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			MIN[j] = INF;
			color[j] = WHITE;
		}
		b = INF;
		a = n;
		color[i] = GRAY;
		MIN[i] = 0;
		while (a != 0) {
			b = INF;
			for (int j = 0; j < n; j++) {
				if (color[j] == GRAY) {
					if (b > MIN[j]) {
						b = MIN[j];
						c = j;
					}
				}
			}
			color[c] = BLACK;
			a -= 1;
			for (int k = 0; k < n; k++) {
				if (color[k] != BLACK && x[c][k] != -1) {
					color[k] = GRAY;
					MIN[k] = min(x[c][k], MIN[k]);
				}
			}
		}
		sum = 0;
		for (int j = 0; j < n; j++) {
			sum += MIN[j];
		}
		sum_min = min(sum_min, sum);
	}
	cout << sum_min << endl;
	return 0;
}