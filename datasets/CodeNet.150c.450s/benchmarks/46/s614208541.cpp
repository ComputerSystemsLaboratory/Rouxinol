#include <iostream>
using namespace std;

int main()
{
		int n[10000], x[10000], i, m, a, b, c;
		while (1) {
				cin >> n[m] >> x[m];
				if (n[m]==0 && x[m]==0) break;
				m++;
		}
		int ans[m];
		for (i=0; i<m; i++) ans[i]=0;

		for (i=0; i<m; i++) {
				for (c=n[i]; c>0; c--) {
						for (b=c-1; b>0; b--) {
								for (a=b-1; a>0; a--) {
										//cout << a << " + " << b << " + " << c << " = " << a+b+c << "\n";
										if (a+b+c==x[i]) ans[i]++;
								}
						}
				}
		}

		for (i=0; i<m; i++) cout << ans[i] << "\n";
}