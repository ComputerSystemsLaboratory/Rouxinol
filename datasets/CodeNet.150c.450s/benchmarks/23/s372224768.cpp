#include <iostream>
using namespace std;
long fib[45];
int main(){
	fib[0] = fib[1] = 1;
	int n; cin >> n;
	for (int i = 2; i <= n; ++i){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n] << '\n';
}