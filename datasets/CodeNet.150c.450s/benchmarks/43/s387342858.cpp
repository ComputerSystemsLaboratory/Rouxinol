#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;





int main()
{
	int n;
	int a[10000], b[10000];
	while (cin >> n,n) {
		int A = 0; 
		int B = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] > b[i]) A += a[i] + b[i];
			else if (a[i] < b[i]) B += a[i] + b[i];
			else {
				A += a[i];
				B += b[i];
			}
		}
		cout << A << " " << B << endl;
	}
}