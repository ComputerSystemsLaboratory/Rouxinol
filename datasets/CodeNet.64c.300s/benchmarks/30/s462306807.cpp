#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional> //sort(A,A.end(),greater<int>());???????????????
#include <queue>
#include <stack>
#include <vector>

#define INF 10 << 10

int main() {
	int n;
	while (cin >> n && n != 0) {

		n = 1000 - n;
		int cnt = 0;
		int coin[] = { 500, 100, 50, 10, 5 };
		for (int i = 0; i < 5; ++i) {
			if (n >= coin[i]) {
				cnt += n / coin[i];
				n = n % coin[i];
			}
		}
		cnt += n;

		cout << cnt << endl;
	}

	return 0;
}