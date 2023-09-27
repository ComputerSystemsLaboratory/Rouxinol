#include<cstdio>
#include<iostream>

using namespace std;

long long a, b;
int gcd, lcm;

void GCD(){

	int big, small;

	big = a;
	small = b;

	while (big) {
		if (small > big) swap(big, small);
		big = big % small;
	}
	gcd = small;

}

void LCM() {
	lcm = a * b / gcd;
}




int main(){
	while (cin >> a >> b) {

		GCD();
		LCM();
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}