#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int fib[45];
	int n;

	cin >>n;

	fib[0] = 1;
	fib[1] = 1;

	if(n == 0)
		cout <<fib[0] <<endl;
	else if(n == 1)
		cout <<fib[1] <<endl;
	else{
		for(int i=2;i<=n;i++){
			fib[i] = fib[i-1] + fib[i-2];
		}
		cout <<fib[n] <<endl;
	}
	return 0;
}