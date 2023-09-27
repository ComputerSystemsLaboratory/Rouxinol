#include <iostream>
#include <cmath>

using namespace std;

int n;

double xa,xb,xc,xd,ya,yb,yc,yd,ta,tb,tc,td;

int main(){

	int i;

	cin >> n;

	for(i=0;i<n;i++){

		cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;

		ta = xa - xb;

		tb = ya - yb;

		tc = xc - xd;

		td = yc - yd;

		if(tc/td == ta/tb) cout << "YES" << endl;

		else if(ta == -tc && tb == -td) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

	return 0;

}