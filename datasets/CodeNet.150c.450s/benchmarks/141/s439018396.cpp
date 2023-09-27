#include <iostream>
#define formula(i,X,Y) ((x[(i+1)%3]-x[(i+2)%3])*(Y-y[(i+1)%3])-(y[(i+1)%3]-y[(i+2)%3])*(X-x[(i+1)%3]))
#define check(i) formula(i,xp,yp)*formula(i,x[i],y[i])

using namespace std;

int main(void){
	float x[3],y[3],xp,yp;

	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp)
		cout << (check(0)>0&&check(1)>0&&check(2)>0 ? "YES" : "NO") << endl;

	return 0;
}