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
	int a, b;
	while (cin >> a >> b) {
		int i = 1;
		int c = a + b;
		while (c / 10 > 0) {
			i++;
			c /= 10;
		}
		cout << i << endl;
	}
}
