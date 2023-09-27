#include<iostream>
#include<cmath>
using namespace std;

int main(){

	typedef struct{
		double x, y;
	}_td;

	int n;
	_td p1, p2, p3, p4;
	double del, eps;
	eps = 10e-12;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y;
		del = (p2.x - p1.x) * (p4.y - p3.y) - (p2.y - p1.y) * (p4.x - p3.x);
		if(abs(del) < eps) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;

}