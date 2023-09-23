#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	long long a = -1000000, b = 1000000, c = 0, tmp = 0, tmp2 = 0;
	cin >> tmp2;
	for (int i = 0; i < tmp2; i++){
		cin>>tmp;
		c += tmp;
		a = max(a, tmp);
		b = min(b, tmp);
	}
	cout << b << " " << a << " " << c << endl;
	return 0;
}