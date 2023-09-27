
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


bool solve(){
	double x[4],y[4];
	for(int i=0;i<4;i++){
		cin>> x[i]>> y[i];
	}
	if(x[1]==x[0] || x[3]==x[2]){
		if(x[1]==x[0] && x[3]==x[2]){
			cout<< "YES"<< endl;
		}else{
			cout<< "NO"<< endl;
		}
		return true;
	}
	double rad1 = atan( (y[1]-y[0]) / (x[1]-x[0]) );
	double rad2 = atan( (y[3]-y[2]) / (x[3]-x[2]) );
	if(rad1 == rad2){
		cout<< "YES"<< endl;
	}else{
		cout<< "NO"<< endl;
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	int n;
	cin>> n;
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}

 