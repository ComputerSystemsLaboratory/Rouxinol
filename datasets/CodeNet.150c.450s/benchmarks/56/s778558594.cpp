#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;

long n, sum;
vector<long> v;
int main(){
	cin >> n;

	for (int i = 0; i < n; ++i){
		long buf;
		cin >> buf; sum += buf;
		v.push_back(buf);
	}
	
	sort(v.begin(), v.end());

	printf("%ld %ld %ld\n", v.front(), v.back(), sum);

	return 0;
}