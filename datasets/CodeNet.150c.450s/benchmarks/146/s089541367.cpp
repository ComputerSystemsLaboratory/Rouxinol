#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1;i<=n ;i++){
		double x[5];
		double y[5];
		for(int j= 1;j<=4;j++) {
			cin >> x[j];
			cin >> y[j];
		}
		if ((y[2]-y[1])*(x[4]-x[3])==(y[4]-y[3])*(x[2]-x[1])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}