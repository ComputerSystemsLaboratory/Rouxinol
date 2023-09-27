#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	for (int i = 0, tmp; i < n; i++) {
		cin >> tmp;
		for (int j = 2; j * j <= tmp; j++) {
			if (tmp % j == 0) {
				res++;
				break;
			}
		}
	}
	cout << n - res << endl;
	return 0;
}