#include<cstdio>
#include<iostream>

using namespace std;
#define INF 100000

int  road, max_t = 0, time_[100][100] = { 0 }, sum, root[100] = { 0 };

void dijkstra(int a) {

	int i,j,k=INF,used[100],minroot;
	for (i = 0; i <= max_t; i++) {
		used[i] = 0;
		root[i] = INF;
	}
	root[a] = 0;
	while (1) {
		minroot = INF;
		for (i = 0; i <= max_t; i++) {
			if (used[i] == 0&&root[i]<minroot) {
				j = i;
				minroot = root[i];
			}
			
		}
		if (k == j) {
			break;
		}
		else {
			k = j;
		}
		used[j] = 1;
		for (i = 0; i <= max_t; i++) {
			if (root[i] > root[j] + time_[j][i]) {
				root[i] = root[j] + time_[j][i];
			}

		}
	}
	sum = 0;
	for (i = 0; i <= max_t; i++)sum += root[i];

	return ;
}






int main() {
	while (1) {
		cin >> road;
		if (road == 0) return 0;
		int i, j, a=0, b=0, c=0, save_a[450] = { 0 }, save_b[450] = { 0 }, save_c[450] = { 0 }, min_sum = INF, ans_town=0;
		max_t = 0;
		for (i = 1; i <= road; i++) {
			cin >> a >> b >> c;
			if (max_t < a) max_t = a;
			if (max_t < b) max_t = b;
			save_a[i] = a;
			save_b[i] = b;
			save_c[i] = c;
		}
		for (i = 0; i <= max_t; i++) {
			for (j = 0; j <= max_t; j++) {
				time_[i][j] = INF;
			}
			time_[i][i] = 0;
		}
		for (i = 1; i <= road; i++) {
			time_[save_a[i]][save_b[i]] = save_c[i];
			time_[save_b[i]][save_a[i]] = save_c[i];
		}
		for (i = 0; i <= max_t; i++) {
			dijkstra(i);
			if (sum < min_sum) {
				ans_town = i;
				min_sum = sum;
			}
		}
		cout << ans_town << " " << min_sum << endl;

	}
}