#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
int n;
int a[10000];
int cou = 0;

bool prime(int m) {
	if (m == 1) return false;
	else if (m == 2) return true;
	else {
		for (int i = 2; i <= sqrt(m) + 1; i++) {
			if (m%i == 0) return false;
			
			
		}
		return true;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (prime(a[i])) cou++;
	}
	cout << cou << endl;

}