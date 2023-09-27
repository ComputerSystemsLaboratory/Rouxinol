#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int a[1001] = {};
	for (int i = 1; i <= 1000; i++)
		a[i] = a[i - 1] + i;

	for (int N; cin >> N&&N;) {
		int cnt = 0;
		for (int i = 0; i <= 1000; i++)
			for (int j = i + 2; j <= 1000; j++)
				if (a[j] - a[i] == N)
					cnt++;

		cout << cnt << endl;
	}
	return 0;
}