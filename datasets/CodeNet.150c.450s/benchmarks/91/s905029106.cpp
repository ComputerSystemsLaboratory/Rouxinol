#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

#define MAX 1000000

static bool gosei[MAX];

void b() {
	for (int i = 2; i <= sqrt(MAX); i++)
		if (gosei[i] == false) {
			for (int j = 2, k = 0; (k = i*j) <= MAX; j++)
				gosei[k] = true;
		}
}

int c(int n) {
	int cnt = 0;
	for (int i = 2; i <= n; i++)
		if (!(gosei[i]))cnt++;
	return cnt;
}

int main() {
	b();
	int n;
	while (cin >> n)
		cout << c(n) << endl;
	return 0;
}