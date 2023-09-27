#include <iostream>
#include <cstdio>
using namespace std;
long long fact(long long n){
	long long m;
	if(n==0) return 1;
	m = fact(n-1);
	return n*m;
}
int main(){
	long long n;
	cin >> n;
	cout << fact(n) << endl;
}