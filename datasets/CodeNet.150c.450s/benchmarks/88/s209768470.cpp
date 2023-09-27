#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int h, w;
	while (cin >> h >> w&&h != 0 && w != 0) {
		int t = h*h + w*w;
		int h2 = h+1;
		while (true) {
			for (int i = h2; i*i < t; i++) {
				long double b = sqrt(t - i*i);
				if (b > (long double)i) {
					int c = b;
					if ((long double)c == b) {
						cout << i << " " << b << endl;
						goto stop;
					}
				}
			}
			t++;
			h2 = 1;
		}
	stop:;
	}
}