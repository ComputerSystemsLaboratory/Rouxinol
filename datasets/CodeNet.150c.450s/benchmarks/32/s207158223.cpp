#include <iostream>
using namespace std;

int main(){
	int m, nmax, nmin, n, a;
	while(1){
		n = 0;
		cin >> m >> nmin >> nmax;
		if(m == 0 && nmax == 0 && nmin == 0) break;
		int* p = new int[m];
		for(int i = 0; i < m; i++){
			cin >> p[i];
		}
		for(int j = nmin; j <= nmax; j++){
			if(n <= p[j-1] - p[j]){
				n = p[j-1] - p[j];
				a = j;
			}
		}
		cout << a << endl;
		delete[] p;
	}
	return 0;
}
