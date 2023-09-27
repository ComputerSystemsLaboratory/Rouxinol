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
	int a[5];
	int b[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	sort(a, a+5);
	for (int i = 0; i < 5; i++) {
		b[i] = a[4 - i];
	}
	for (int i = 0; i < 4; i++) {
		cout << b[i] << " ";
	}
	cout << b[4] << endl;
}