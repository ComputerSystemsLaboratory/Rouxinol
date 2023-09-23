#include <iostream>
#include <cmath>
#define M 1000000007
using namespace std;
typedef unsigned long long ull;


ull power(ull x, ull n){
	if(n==0)
		return 1;
	ull temp = power(x*x%M, n/2)%M;
	if(n%2==0){
		return temp;
	}else{
		return x*temp;	
	}
}

int main() {
	ull m,n;
	cin >> m;
	cin >> n;
	cout << power(m,n)%M << endl;
	return 0;
}