#include<iostream>
long dp[50];
int fib(int n){
	if (n == 0 || n == 1)
		return 1;
	else{
		if (dp[n]==0)
		    return (dp[n] = fib(n - 1) + fib(n - 2));
		else return dp[n];
	}
}
int main(){
	int n;
	std::cin >> n;
		std::cout << fib(n) << "\n";
}