//#define _USE_MATH_DEFINES
#include <iostream>
//#include <stdio.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
#include <cmath>

using namespace std;

long gcd(long a, long b){
	long A, B, R;

	if (a > b){
		A = a;
		B = b;
	}
	else{
		A = b;
		B = a;
	}

	while (1){
		R = A % B;
		if (R == 0){
			return B;
		}
		else{
			A = B;
			B = R;
		}
	}
}

long lcm(long a, long b){
	long A, B;

	A = a;
	B = b;

	while (1){
		if (A > B){
			B = ceil((float)A / (float)b) * b;
		}
		else{
			A = ceil((float)B / (float)a) * a;
		}

		if (A == B) return A;
	}

}


int main(){

	int n;
	long a, b;
	long gcd_a, lcm_a;


	while (cin >> a >> b){

		gcd_a = gcd(a, b);
		lcm_a = lcm(a, b);

		cout << gcd_a << " " << lcm_a << endl;
	}

	return 0;
}