#include <iostream>
using namespace std;
const int mod = 1000000007;
int main(){
	int n,m;
	cin >> n >> m;
	long long res = 1;
	long long x = n;
	while(m>0){
		if(m&1)res = x * res % mod;
		x = x*x %mod;
		m >>= 1;
	}
	cout << res << endl;
	return 0;
	}