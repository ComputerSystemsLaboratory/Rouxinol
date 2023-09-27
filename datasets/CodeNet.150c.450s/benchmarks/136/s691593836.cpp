#include <iostream>
using namespace std;

long long gcd(long long m,long long n){
	if(m==0||n==0) return 0;
	while(m!=n){
		if(m>n) m=m-n;
		else n=n-m;
	}
	return m;
}

int main(void){
	long long a,b;

	while(cin >> a >>b){
		cout << gcd(a,b) << " " << a/gcd(a,b)*b << endl;
	}
	return 0;
}