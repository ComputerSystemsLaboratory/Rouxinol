#include <iostream>
using namespace std;

int main() {
	int n, nmin, nmax;
	int a[500];
	int b[500];
	int c[3];
	int gapmax = -100;
	int gap;
	int pass;

	a[0] = 0;
	b[0] = 0;
	c[0] = 0;

	while (1) {
		cin >> n >> nmin >> nmax;

		if (n == 0 && nmin == 0 && nmax == 0) { 
			break; 
		}
		pass = 0;
		gapmax = -100;

		for (int i = 1; i < n + 1; i++) {
			cin >> a[i];
		}
		for (int i = 1; i < n + 1;i++){
			b[i] = a[i] - a[i + 1];
			}
		for (int i = nmin; i < nmax+1; i++) {
			if (gapmax<=b[i]){
				gapmax= b[i];
				pass = i;
			}
			
		}
		cout << pass << endl;	
	}	
}