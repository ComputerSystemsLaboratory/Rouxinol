#include <iostream>
using namespace std;
int main(void)
{
	double x[4];
	double y[4];
	int n;
	cin >> n;
	while(n--){
		for(int i=0; i<4; i++){
			cin >> x[i] >> y[i];
		}
		double d1,d2;
		d1 = (y[1]-y[0])/(x[1]-x[0]);
		d2 = (y[3]-y[2])/(x[3]-x[2]);
		if(d1==d2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}