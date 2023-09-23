#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int n;
	long long int result = 100000;
	cin >> n;
	for (; n > 0; --n) {
		result += result / 20 + 999;
		result -= result % 1000;
	}
	cout << result << endl;
	return 0;
}