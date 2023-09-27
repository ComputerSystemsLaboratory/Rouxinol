#include <iostream>
#include <bitset>
using namespace std;
int dec2bin(long k, bitset<32>& b)
{
	int i = 0;
	int a = k;
	while ( a != 0 ){
		if( a % 2 == 1)
			b.set(i);
		a /= 2;
		++i;
	}
	return i;
}
int main()
{
	long long n, m, c;
	cin >> m >> n;
	bitset<32> nbin;
	int k = dec2bin(n, nbin);
	long long M[32] = {};
	M[0] = m;
	for(int i = 1; i < k; ++i)
		M[i] = (M[i-1] * M[i-1]) % 1000000007;
	c = 1;
	for(int i = 0; i < k; ++i){
		if(nbin[i]){
			if(0 == i)	c = M[0];
			else		c = ( c * M[i] ) % 1000000007;
		}
	}
	cout << c << "\n";
	return 0;
}