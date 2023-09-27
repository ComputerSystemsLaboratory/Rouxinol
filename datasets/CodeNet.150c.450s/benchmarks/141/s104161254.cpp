#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>

using namespace std;

typedef complex<double> P;

double dot(P p1,P p2){
	return p1.real() * p2.imag() - p1.imag() * p2.real();
}


int main(){

	double x1,x2,x3,y1,y2,y3;
	double xp,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		P  p1(x1,y1),p2(x2,y2),p3(x3,y3),po(xp,yp);
		bool f = true;
		if( dot(p2-p1,p3-p1) * dot(p2-p1,po-p1) < 0)
			f = false;
		else if(dot(p3-p1,p2-p1) * dot(p3-p1,po-p1) < 0)
			f = false;
		else if(dot(p2-p3,p1-p3) * dot(p2-p3,po-p3) < 0)
			f = false;

		cout << (f ? "YES" : "NO") << endl;

	}

	return 0;
}