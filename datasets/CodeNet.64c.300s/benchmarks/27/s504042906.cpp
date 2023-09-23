#include <stdio.h>
#include <iostream>
using namespace std;

int judge(int n, int x);

int main(void)
{		
	while (1) {
		int n, x;
		cin >> n >> x;
		
		if (n == 0 && x == 0) break;
		
		cout << judge(n, x) << endl;
	}
	
	return 0;
}

int judge(int n, int x)
{
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (i + j + k == x) {
					count++;
					break;
				}
			}
		}
	}
	
	return count;
}