#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	while(1) {
		int n, add = 0, max = 0, min = 1000, s, avg;
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i++) {
			cin >> s;
			if(s <= min) min = s;
			if(s >= max) max = s;
			add += s;
		}
		cout << (add - max - min)/ (n-2) <<endl;
	}
	return 0;
}