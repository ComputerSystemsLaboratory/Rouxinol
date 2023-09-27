
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;


double f(double x1, double y1, double x2, double y2, double x3, double y3){
	x2 -= x1;
	x3 -= x1;
	y2 -= y1;
	y3 -= y1;
	return abs(x2*y3-y2*x3)/2;
}

bool solve(){
	vector<double> x(4),y(4);
	while(cin>>x[0]){
		cin>> y[0];
		for(int i=1;i<4;i++){
			cin>> x[i]>> y[i];
		}
		double s[4];
		for(int i=0;i<4;i++){
			s[i] = f(x[i],y[i],x[(i+1)%4],y[(i+1)%4],x[(i+2)%4],y[(i+2)%4]);
		}
		if(s[0] == s[1]+s[2]+s[3]){
			cout<< "YES"<< endl;
		}else{
			cout<< "NO"<< endl;
		}
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 