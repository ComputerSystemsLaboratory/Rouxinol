#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<stack>
#include<cstdio>
#include<queue>
#define PI 3.1415927
using namespace std;
int main() {
	int h[11];
	for (int i = 0; i < 10; i++) {
		cin >> h[i];
	}
	sort(h, h + 10);
	for (int i = 9; i > 6; i--) {
		cout << h[i] << endl;
	}
}
