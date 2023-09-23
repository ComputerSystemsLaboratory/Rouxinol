#include <iostream>
#define EPS 1e-9
using namespace std;

int main(){
	int n,m,p;
	while(cin >> n >> m >> p,n){
		int x[100];
		double sum = 0;
		for(int i = 0;i < n;i++){
			cin >> x[i];
			sum += x[i];
		}
		if(!x[m - 1]) cout << 0 << endl;
		else cout << (int)(sum * 100.0 * (1.0 - (double)p / 100.0) / (double)x[m - 1] + EPS) << endl;
	}
	return 0;
}