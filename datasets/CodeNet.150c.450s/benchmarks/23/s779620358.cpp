#include<iostream>
using namespace std;
#define MAX 45

int fib[45];
void make_fib(){
	fib[0] = 1;
	fib[1] = 1;
	for (int i=2;i<MAX;i++) {
	fib[i] = fib[i-1] + fib[i-2];
	}
}

int main() {
	int n;
	cin >> n;
	make_fib();
	cout << fib[n] << endl;
	return 0;
}