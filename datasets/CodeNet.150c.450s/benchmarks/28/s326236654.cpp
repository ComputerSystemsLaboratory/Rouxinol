#include "iostream"

using namespace std;

int nes(int n, int w[10000], int m ) {
	int ne = 1;
	int x = 0;

	for (int i = 0; i < n; i++) {
		if( x+w[i] <= m ) x += w[i];
		else {
			ne++;
			x = w[i];
		}
	}
	return ne;
}

int main() {

	int n, k;
	int w[100000], max;

	cin >> n;
	cin >> k;
	max = 0;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		if (w[i] > max) max = w[i];
	}

	int head, mid, tail;

	head = max;
	tail = max * n / k + 1;
	mid = (head + tail) / 2;
	int ne;
	while(tail - head > 0 ) {

		mid = (head + tail) / 2;
		ne = nes(n, w, mid);
		if (ne <= k) tail = mid;
		else head = mid+1;

	}/*
	do {
		mid--;
		ne = nes(n, w, mid);
	} while (ne <= k && mid >= max);
	*/
	cout << tail << endl;

	return 0;
}