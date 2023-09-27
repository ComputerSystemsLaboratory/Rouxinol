#include<iostream>
#include<stdio.h>
using namespace std;
long long factorial(int D) {
	return (D > 0 ? D*factorial(D - 1) : 1);
}
int main() {
	int n;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}