#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int array[30];
	int w, n;

	cin >> w;
	cin >> n;
	for(int i = 0; i < w; i++) {
		array[i] = i + 1;
	}
	for(int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d,%d", &a, &b);
		c = array[a - 1];
		array[a - 1] = array[b - 1];
		array[b - 1] = c;
	}

	for(int i = 0; i < w; i++) {
		cout << array[i] << endl;
	}

	return 0;
}