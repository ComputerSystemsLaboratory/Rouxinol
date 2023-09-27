
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>

using namespace std;

typedef complex<double> P;

int main(){
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>a[i];

	}
	sort(a,a+5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d%c",a[4-i],(i == 4) ? '\n' : ' ');
	}

	return 0;
}