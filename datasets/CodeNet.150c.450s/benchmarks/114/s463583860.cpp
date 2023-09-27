#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 100

void searchIndex(int mat[][N], int n, int obj, int *row, int *col);
void changeGroup(int group[], int n, int g_old, int g_new);

int main(void)
{
	int n;
	cin >> n;

	int group[N];
	for (int i = 0; i < n; i++) group[i] = i;

	int a[N][N];	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int aij;
			cin >> aij;
			a[i][j] = aij;
		}
	}

	int e[N * N];
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			e[k++] = a[i][j];
		}
	}

	sort(e, e + k);

	int p = 0;
	while (e[p] == -1) p++;

	int cnt = 0;
	for (int q = p; q < k; q++) {
		int i, j;
		searchIndex(a, n, e[q], &i, &j);
		if (group[i] == group[j]) continue;
		cnt += e[q];
		if (group[i] > group[j]) changeGroup(group, n, group[i], group[j]);
		else changeGroup(group, n, group[j], group[i]);
	}

	cout << cnt << endl;

	return 0;
}

void searchIndex(int mat[][N], int n, int obj, int *row, int *col)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mat[i][j] == obj) {
				mat[i][j] = -1;
				*row = i;
				*col = j;
				return;
			}
		}
	}
}

void changeGroup(int group[], int n, int g_old, int g_new)
{
	for (int i = 0; i < n; i++) {
		if (group[i] == g_old) group[i] = g_new;
	}
}