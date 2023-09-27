#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int w, n;
	cin >> w >> n;
	const int MAX_N = 30 + 1;
	int a[MAX_N];
	for (int i = 1; i <= w; i++) {
		a[i] = i;
	}
	int x, y;
	while (n--) {
		scanf("%d,%d", &x, &y);
		int tmp = a[y];
		a[y] = a[x];
		a[x] = tmp;
	}
	for (int i = 1; i <= w; i++) {
		cout << a[i] << endl;
	}
    return 0;
}