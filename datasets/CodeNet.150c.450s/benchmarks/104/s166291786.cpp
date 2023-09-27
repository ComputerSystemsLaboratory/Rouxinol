#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int str[30];
	int w, n, i;
	int a, b;
	int t;

	cin >> w;
	cin >> n;

	for (i = 0; i < 30; i++){
		str[i] = i + 1;
	}

	for (i = 0; i < n; i++){
		scanf("%d,%d", &a, &b);
		
		t = str[a - 1];
		str[a - 1] = str[b - 1];
		str[b - 1] = t;
	}
	for (i = 0; i < w; i++){
		cout << str[i] << "\n";
	}
	return 0;
}