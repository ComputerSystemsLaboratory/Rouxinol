#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	while (true) {
		int n, x;
		cin >> n >> x;
		if (n == 0 && x == 0) break;
		int counter = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++) {
					if (i != j && j != k && i != k && i + j + k == x) counter++;
				}
			}
		}
		cout << counter / 6 << endl;
	}
}
