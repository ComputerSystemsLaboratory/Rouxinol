#include <iostream>
using namespace std;

long long int mod_pow(long long int x , int n , int mod){
	long long int ret=1;
	while(n>0){
		if(!(n%2==0)) ret=ret*x % mod;
		x = x * x % mod;
		n>>=1;
	}
	return ret;
}

int main(){
	const int mod=1000000007;
	int m , n;
	cin >> m >> n;
	cout << mod_pow(m , n , mod) << endl;
	return 0; 
}