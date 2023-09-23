#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int h[200000000];
int H;

void HEAP(int h[], int i) {
	int l, r, a, b, MAX;
	l = i * 2;
	r = i * 2 + 1;
	if (h[l] > h[i] && l<=H) {
		MAX = l;
	}
	else {
		MAX = i;
	}
	if (h[MAX] < h[r] && r<=H) {
		MAX = r;
	}
	if (MAX != i) {
		a = h[i];
		b = h[MAX];
		h[i] = b;
		h[MAX] = a;
		HEAP(h, MAX);
	}
}

void HEAP2(int h[]){
	for (int i = H / 2; i >= 1; i--) {
		HEAP(h, i);
	}
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; i++) {
		cin >> h[i];
	}
	HEAP2(h);
	for (int i = 1; i <= H; i++) {
		cout << ' ';
		cout << h[i];
	}
	cout << endl;
	return 0;
}