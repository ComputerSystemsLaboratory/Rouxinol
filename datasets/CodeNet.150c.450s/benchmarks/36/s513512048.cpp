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
	long long d;
	while (cin >> d) {
		long long sum = 0;
		for (long long i = 1; i <= (600 / d - 1); i++) {
			sum += i*i*d*d*d;
		}
		cout << sum << endl;
	}
	
	

}