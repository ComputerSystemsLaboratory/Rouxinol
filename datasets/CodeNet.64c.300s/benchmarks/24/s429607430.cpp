#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int n;
	
	while (cin >> n, n) {
		int a = 0, b = 0;
				
		for_(i,0,n) {
			int aa, bb;
			cin >> aa >> bb;
			
			if (aa > bb) a += (aa + bb);
			else if (aa < bb) b += (aa + bb);
			else a += aa, b += bb;
		}
		
		cout << a << " " << b << endl;
	}
}