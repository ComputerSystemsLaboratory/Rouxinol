#include <iostream>
#include <math.h>
using namespace std;
//ABCD?????????????????°??????
int main(){
	int n;
	cin >> n;
	while(n--){
		double x[4], y[4], o;
		for(int i = 0; i < 4; i++) cin >> x[i] >> y[i];
		o = (x[1]-x[0])*(y[3]-y[2]) - (y[1]-y[0])*(x[3]-x[2]);
		if(fabs(o) < 1e-10) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}