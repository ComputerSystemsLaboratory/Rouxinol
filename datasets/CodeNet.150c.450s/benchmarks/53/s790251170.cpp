#include <iostream>
#include <cmath>
using namespace std; 
inline void prime_fac(int n){
	int m=(int)floor(sqrt(n)+0.5);
	for (int i=2;i<=m;++i){
		if (n%i==0){
			while (n%i==0) cout <<" "<< i,n/=i ;
		}
	}
	if (n>1) cout << " " << n ;
}
int main(){
	int x;
	cin >> x;
	cout << x << ":";
	prime_fac(x);
	cout << endl;
	return 0;
}