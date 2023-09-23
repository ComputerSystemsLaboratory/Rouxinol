#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<queue>
#include<algorithm>
#include<utility>
#include<vector>
#include<list>
using namespace std;
int main() {
	int a[8], hit = 0, blow = 0, k = 0, f, cnt=0;
	while (cin >> f) {
		a[k] = f;
		k++;
		if (k % 8 == 0) {
			for (int i = 0; i < 4; ++i) {
				if (a[i] == a[i+4]) {
					hit++;
					a[i] = -1;
					a[i+4] = -1;
					continue;
				}
				for (int j = 0; j < 4; ++j) {
					if (a[i] == a[j+4] )blow++;
				}
			}
			cout << hit << " " << blow << endl;
			k = 0;
			hit = 0;
			blow = 0;
		}
	}
	return 0;
}
