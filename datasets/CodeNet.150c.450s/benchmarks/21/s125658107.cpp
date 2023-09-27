#include<iostream>
using namespace std;

int64_t cubic(const int64_t x) {
	return x*x*x;
}

void print(const int64_t x) {
	cout << x << endl;
}

int main() {
	int64_t x;
	cin >> x;
	
	//print x^3
	print(cubic(x));
	
	return 0;
}