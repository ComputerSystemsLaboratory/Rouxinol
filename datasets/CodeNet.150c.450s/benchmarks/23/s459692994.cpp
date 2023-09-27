#include <iostream>
using namespace std;

int n;
int _fib[100];

int fib(int n){
	if(_fib[n]) return _fib[n];
	int i=0;
	if(n == 0) i = 1;
	else if(n == 1) i = 1;
	else i = fib(n-1) + fib(n-2);
	_fib[n] = i;
	return i;
}

int main(void){
	int n;
	cin >> n;
	
	cout << fib(n) << endl;
	
	return 0;
}
