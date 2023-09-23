#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long int64;
inline int binary_power(int64 x,int64 n,int64 mod){
	int res=1;
	while (n){
		if (n&1) res = res * x % mod;
		x = x * x % mod;
		n >>= 1;
	}
	return res;
}
int main(){
	int64 m,n;
	cin >> m >> n;
	cout << binary_power(m,n,1000000007) << endl;
	return 0;
}