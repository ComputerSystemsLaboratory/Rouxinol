// B.cpp

#include <iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

int main(void) {
	int a, b;
	
	while(cin >> a >> b) {
	cout << gcd(a, b) << " " <<  lcm(a, b) << endl;
	}
	
	return 0;
}

int gcd(int a, int b) {
	int max, min, res;
	
	res = 1;
	
	if(a > b){
		max = a, min = b;
	}
	if(a <= b){
		max = b, min = a;
	}
	if(min == 0) return max;
	while(res) {
		res = max % min;
		max = min;
		min = res;
	}
	return max;
}
int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}