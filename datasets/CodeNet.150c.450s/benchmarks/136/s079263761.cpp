#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

long long gcm(long long n, long long m) {
	if (n == 0) return m;
	else return gcm(m%n, n);
}



int main()
{
	long long a, b;
	while (cin >> a) {
		cin >> b;
		cout << gcm(a, b) << " " << (a*b) / gcm(a, b) << endl;
	}
		





}