#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long double ax, ay, bx, by, cx, cy, dx, dy;
	int num;
	cin >> num;
	while (cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy) {
		/**
		double inner = (by - ay)*(dy - cy) + (bx - ax)*(dx - cx);
		double length = sqrt((by - ay)*(by - ay) + (bx - ax)*(bx - ax))
			* sqrt((dy - cy)*(dy - cy) + (dx - cx)*(dx - cx));
		*/
		//if(max(inner - length, length - inner) < 1e-5) {
		if((bx - ax) * (dy - cy) - (by - ay) * (dx - cx) == 0){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		//cout << (bx - ax) * (dy - cy) - (by - ay) * (dx - cy) << endl;
	}
	return 0;
}
