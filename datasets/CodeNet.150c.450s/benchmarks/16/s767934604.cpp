#include <stdio.h>
#include <iostream>
using namespace std;

bool searchEdge(const int a[][2], int n, int edge[]);
int calcArea(const int a[][2], const int edge[]);

int main(void)
{
	int a[20001][2];
	a[0][0] = 0;

	char ch;
	int cnt = 0;
	while (cin >> ch) {
		if (ch == '\\') a[cnt][1] = a[cnt][0] - 1;
		else if (ch == '/') a[cnt][1] = a[cnt][0] + 1;
		else if (ch == '_') a[cnt][1] = a[cnt][0];
		else break;
		a[cnt + 1][0] = a[cnt][1];
		cnt++;
	}

	int edge[2];
	edge[1] = -1;
	int area[10000];
	int k = 0;
	while (1) {
		if (searchEdge(a, cnt, edge)) {
			area[k] = calcArea(a, edge);
			k++;
		}
		if (edge[1] >= cnt - 1) break;
	}

	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += area[i];
	}

	cout << sum << endl;
	cout << k;
	for (int i = 0; i < k; i++) {
		cout << " " << area[i];
	}
	cout << endl;

	return 0;
}

bool searchEdge(const int a[][2], int n, int edge[])
{
	edge[0] = edge[1] = edge[1] + 1;
	int i;
	for (i = edge[0]; i < n; i++) {
		if (a[i][1] - a[i][0] == -1) {
			edge[0] = i;
			break;
		}
	}
	if (i >= n) {
		edge[1] = n - 1;
		return false;
	}

	int height = a[edge[0]][0];
	edge[1] = edge[0];
	int j;
	for (j = edge[1]; j < n; j++) {
		if (a[j][1] == height) {
			edge[1] = j;
			break;
		}
	}
	if (j >= n) return false;

	return true;
}

int calcArea(const int a[][2], const int edge[])
{
	int max = a[edge[0]][0];
	double area = 0;
	for (int i = edge[0]; i <= edge[1]; i++) {
		area += (-(a[i][0] - max));
		area += (-(a[i][1] - a[i][0]) / 2.0);
	}

	return (int)area;
}