#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

	while (1) {
		int n, x;
		cin >> n >> x;
		if (n == 0 && x == 0) break;
		int same = 0;
		for (int i = 1; i <= n-2; i++) {
			for (int j = i+1; j <= n-1; j++) {
				int k;
				k = x - i - j;
				if (k <= n && i < j && j < k) same += 1;
			}
		}
		cout << same << endl;
	}

	return 0;
}