#include <iostream>
using namespace std;

struct point{
	double x;
	double y;
};

struct line{
	point p1;
	point p2;
};

bool parallel(line l1, line l2){
	double dx1 = l1.p2.x - l1.p1.x;
	double dy1 = l1.p2.y - l1.p1.y;
	double dx2 = l2.p2.x - l2.p1.x;
	double dy2 = l2.p2.y - l2.p1.y;
	if(dy2 * dx1 == dy1 * dx2) return true;
	else return false;
}

int main(){
	line l1, l2;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> l1.p1.x >> l1.p1.y >> l1.p2.x >> l1.p2.y
			>> l2.p1.x >> l2.p1.y >> l2.p2.x >> l2.p2.y;
		if(parallel(l1,l2)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}