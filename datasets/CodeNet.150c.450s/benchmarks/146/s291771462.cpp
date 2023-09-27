#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n-->0){
		double x1,x2,x3,x4,y1,y2,y3,y4;
		cin >>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		double xa = x2-x1;
		double xb = x4-x3;
		double ya = y2-y1;
		double yb = y4-y3;
		if(abs(xa*yb-xb*ya)<0.0000000001) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}