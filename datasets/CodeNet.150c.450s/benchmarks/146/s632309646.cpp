#include <iostream>
#include <string>
using namespace std;

float han(float a, float b, float c, float d){
	return (d - b) / (c - a);
}

int main(){
	int n;
	float ax, ay, bx, by, cx, cy, dx, dy, A, B;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
		if(ax == bx && cx == dx){
			cout << "YES" << endl;
			continue;
		}
		if(ax == bx || cx == dx){
			cout << "NO" << endl;
			continue;
		}
		A = han(ax, ay, bx, by);
		B = han(cx, cy, dx, dy);
		if (A==B){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}