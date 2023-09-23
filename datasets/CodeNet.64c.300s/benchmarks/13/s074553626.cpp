#include <iostream>
#include <cmath>
using namespace std;

int Fib(int n){
	double phi = (1+sqrt(5))/2;
	return floor(pow(phi,n)/sqrt(5) + 0.5 );
}

int main() {
	int n;
	
	while(cin>>n){
		cout<<Fib(n+1)<<endl;
	}
	
	
	return 0;
}