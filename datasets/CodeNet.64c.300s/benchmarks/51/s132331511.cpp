#include <iostream>

long long int factorial(long long int n){
	if(n==0 || n==1) return (1);
	else return (n*factorial(n-1));
}

using namespace std;

int main(){
	long long int n;
	cin >> n;
	cout << factorial(n) << '\n' ;
}