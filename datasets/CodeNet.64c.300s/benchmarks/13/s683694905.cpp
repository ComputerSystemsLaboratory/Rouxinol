#include <stdio.h>
#include <iostream>
using namespace std;

int n, d[50];

long long int fib(long long int k){
	if (!k || k == 1) return 1;
	if (!d[k]) { 
		d[k] = fib(k - 1) + fib(k - 2);
		return d[k];
	}
	else return d[k];
}

int main(){
	cin >> n;
	d[0] = 1; d[1] = 1;
	cout << fib(n) << endl;
}