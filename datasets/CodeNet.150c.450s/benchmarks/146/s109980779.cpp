#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i,num;
	double x[4],y[4];
	cin >> num;

	for ( i = 0 ; i< num; i++ ) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];

		if(  (x[0]-x[1])*(y[2]-y[3]) == (y[0]-y[1])*(x[2]-x[3])  ){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}