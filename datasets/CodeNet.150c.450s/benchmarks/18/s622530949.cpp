//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <math.h>
#include<algorithm>
#include <utility>
using namespace std;
int main() {
	int  n, add, money = 100000;
	cin >> n;
	add = 0;
	money = 100000;
	for (int i = 0; i < n; i++) {
		add = money*0.05;
		money += add;
		if (money % 1000 != 0) {
			money /= 1000;
			money *= 1000;
			money += 1000;
		}
	}
	cout << money << endl;
	return 0;
}