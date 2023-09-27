#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int w, n;
	cin >> w >> n;
	int *line = new int[w];
	for (int i = 0; i < w; i++)
		line[i] = i+1;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d,%d", &a, &b);
		a--, b--;
		line[a] ^= line[b];
		line[b] ^= line[a];
		line[a] ^= line[b];
	}
	for (int i = 0; i < w; i++)
		cout << line[i] << endl;
	delete[] line;
	return 0;
}