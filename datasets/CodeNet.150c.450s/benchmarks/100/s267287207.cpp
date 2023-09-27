#include <iostream>
using namespace std;
typedef unsigned long ulong;

ulong factorial(int n){
	ulong s = 1;
	while (n){
		s *= n--;
	}
	return s;
}

int main(void){
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}