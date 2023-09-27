#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int s[16][16] = {};

int sol(int i, int j) {
	if(s[i][j] > 0)return s[i][j];
	if(s[i][j] < 0)return 0;
	if(i>0) s[i][j] += sol(i-1, j);
	if(j>0) s[i][j] += sol(i, j-1);
	return s[i][j];
}

int main() {
	ios::sync_with_stdio(false);
	
	int a, b, n, x, y;
	
	while(1) {
		cin >> a >> b;
		if(!(a|b))break;
		cin >> n;
		
		rep(i, a) {
			rep(j, b) {
				s[i][j] = 0;
			}
		}
		
		s[0][0] = 1;
		
		rep(i, n) {
			cin >> x >> y;
			s[x-1][y-1] = -1;
		}
		
		cout << sol(a-1, b-1) << endl;
		
	}
	
	return 0;
}