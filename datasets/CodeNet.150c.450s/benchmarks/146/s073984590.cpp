
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){
	
	vector<double> x(4);
	vector<double> y(4);
	for(int i=0;i<4;i++){
		cin>> x[i]>> y[i];
	}
	double a,b;
	a = (y[1]-y[0]) / (x[1]-x[0]);
	b = (y[3]-y[2]) / (x[3]-x[2]);
	
	if(a==b){
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

 