#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <complex>
using namespace std;
int main() {
	int w, n;
	cin >> w>> n;
	int temp[30];
	char s;
	int a[30], b[30];
	for (int i = 0;i < w;i++) {
		temp[i] = i + 1;
	}
	for (int i = 0;i < n;i++) {
		cin >> a[i] >> s >> b[i];
		int tempa;
			int tempb;
			tempa = temp[a[i]-1];
			tempb = temp[b[i]-1];
			temp[a[i]-1] = tempb;
			temp[b[i]-1] = tempa;
	}
	for (int i = 0;i < w;i++) {
		cout << temp[i] << endl;
	}
}