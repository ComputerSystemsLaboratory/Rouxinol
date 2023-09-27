#include<iostream>

using namespace std;

int main() {
	int i, j, l, num[31], w, n, a=0, b=0, c;
	char kanma;
	
	cin >> w;
	for (i = 1; i <= w; i++) {
		num[i] = i;
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> kanma >> b;
		c = num[a];
		num[a] = num[b];
		num[b] = c;
	}
	for (i = 1; i <= w; i++) {
		cout << num[i] << endl;
	}
	return 0;
}