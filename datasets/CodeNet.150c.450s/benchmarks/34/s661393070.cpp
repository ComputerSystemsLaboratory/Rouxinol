#include <iostream>
#include <algorithm>

using namespace std;

int main( void )
{
	int n, m[31];
	fill(m, m+31, 0);
	m[0] = 1;
	for(int i=0; i < 30; ++i) {
		if(!m[i]) continue;
		for(int j=1; j <= 3; ++j) {
			int ii = i + j;
			if(ii <= 30) {
				m[ii] += m[i]; 
			}
		}
	}
	for(int i=0; i <= 30; ++i) m[i] /= 10;
	while(cin >> n, n) {
		cout << m[n] / 365 + ((m[n] == 0 || m[n]%365)? 1 : 0) << endl;
	}
	return 0;
}