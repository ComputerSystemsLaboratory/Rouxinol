#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
string str[40];
int* BubbleSort(int *a, int *b, int n) {
	rep(i,n) {
		for(int j = n - 1; j > i; --j) {
			if(a[j] < a[j-1]) {
				swap(a[j], a[j-1]);
				swap(b[j], b[j-1]);
			}
		}
	}
	return a;
}

int* SelectionSort(int *a, int *b, int n) {
	rep(i,n) {
		int Min = i;
		rep2(j,i,n) {
			if(a[j] < a[Min]) {
				Min = j;
			}
		}
		if(i != Min) {
			swap(a[i], a[Min]);
			swap(b[i], b[Min]);
		}
	}
	return a;
}

void init(int *b, int *c, int n) {	
	rep(i,n) {
		c[i] = str[i][1] - '0';
	}
	rep(i,n) {
		b[i] = i;
	}
}
void p(int *b, int *c, int n) {
	bool f = 1;
	rep(i,n) {
		rep2(j,i,n) {
			if(b[i] > b[j]) {
				if(c[i] == c[j]) f = 0;
			}
		}
	}
	rep(i,n) {
		cout << str[b[i]];
		if(i < n - 1) cout << " ";
	}
	cout << endl;
	if(f) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}

int main() {
	int n, b[40], c[40];
	cin >> n;
	rep(i,n) {
		cin >> str[i];
	}

	init(b, c, n);
	BubbleSort(c, b, n);
	p(b, c, n);
	init(b, c, n);
	SelectionSort(c, b, n);
	p(b, c, n);

	return 0;
}