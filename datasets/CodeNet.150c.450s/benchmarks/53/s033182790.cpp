#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 2147483647
 
using namespace std;

bool isprime(int x)
{
    if (x == 2) return (true);
    if (x <= 1 || x % 2 == 0) return (false);
 
    for (int i = 3; i <= sqrt(x) + 1; i += 2) {
        if (x % i == 0) return (false);
    }
    return (true);
}

int main(void)
{
	int n;
	
	cin >> n;

	int tmp = n;

	cout << n << ":";

	if (isprime(n)) {
		cout << " " << n << endl;
		return (0);
	}

	for (int i = 2; i <= n; i++) {
		if (tmp == 1) break;
		if (isprime(i)) {
			if (tmp % i == 0) {
				cout << " " << i;
				tmp /= i;
				i--;
			} 
		}
	}
	cout << endl;

	return (0);
}