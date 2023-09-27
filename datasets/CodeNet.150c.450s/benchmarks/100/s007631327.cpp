#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

int main(){
	int n;
	long long int result = 1;
	cin >> n;
	for (; n > 0; --n) {
		result *= n;
	}
	cout << result << endl;
	return 0;
}