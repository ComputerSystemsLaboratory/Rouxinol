#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	long n, k, m;
	int c;
	cin >> n;
	m = n;
	k = ceil(sqrt((double)n));
	vector<char> vA(k+1, 0);
	vector<long> vP;
	vector<long> vC;
	vP.reserve(100);
	vC.reserve(100);
	for(int i = 2; i <= k; ++i){
		if( vA[i] == 0 ){
			vA[i] = 1;
			for(int j = 2; j * i <= k; ++j)
				vA[i * j] = 2;
			c = 0;
			while( 0 == m % i){
				m = m / i;
				++c;
			}
			if( 0 != c){
				vP.push_back(i);
				vC.push_back(c);
			}
		}
	}

	if( 1 != m){
		vP.push_back(m);
		vC.push_back(1);
	}

	cout << n << ":";
	for(int i = 0; i < vP.size(); ++i){
		long p = vP[i];
		for(int j = 0; j < vC[i]; ++j)
			cout << " " << p;
	}
	cout << "\n";
	return 0;
}