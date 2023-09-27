#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(void) {


	//0011
	int Line[31], w=0, n=0, a, b, tmp;
	cin >> w;
	cin >> n;
	for (int i=0; i < 31; i++) {
		Line[i] = i;
	}
	for (int j = 0; j < n; j++) {
		scanf("%d,%d", &a, &b);
		tmp = Line[a];
		Line[a] = Line[b];
		Line[b] = tmp;
	}
	for (int k = 1; k <= w; k++) {
		cout << Line[k] << endl;
	}


	return 0;
}