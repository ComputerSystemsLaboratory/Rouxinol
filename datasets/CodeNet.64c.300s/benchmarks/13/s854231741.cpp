#include <iostream>
using namespace std;

//再帰
int fibonacci(int n){
	if(n==0) return 1; //たぶん本当はフィボナッチ数列はf(0)=0 だと思うのだが、問題文がそうなっていたので１を返す。
	else if(n==1) return 1;
	else return fibonacci(n-2) + fibonacci(n-1);
}

//DP
int fibonacci_dp(int n){
	int i;
	int fib[45];

	fib[0]=1;
	fib[1]=1;

	for(i=2; i<=n; i++){
		fib[i]=fib[i-2]+fib[i-1];
	}
	return fib[n];
}

int main() {
	int n;

	cin >> n;
	//cout << fibonacci(n) << endl;
	cout << fibonacci_dp(n) << endl;

	return 0;
}