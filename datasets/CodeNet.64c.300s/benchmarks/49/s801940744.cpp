#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[]) {
	int a, b;
	while (cin >> a >> b) {
		int sum = a + b;
		int res = 0;
		while (sum > 0) {
			sum /= 10;
			res++;
		}
		cout << res << endl;
	}
	return 0;
}