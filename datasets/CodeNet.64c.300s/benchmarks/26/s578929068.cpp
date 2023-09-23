#include <iostream>
using namespace std;

long A = 1000000007;

long power(long m,long n){
	if(n == 1) return m;
	if(n%2 != 0) return ((power(m%A*m%A,n/2))%A*m%A);
	return ((power(m%A*m%A,n/2))%A);
}
	
int main() {
	long m,n;
	cin >> m >> n;
	cout << power(m,n) << endl; 
	return 0;
}
