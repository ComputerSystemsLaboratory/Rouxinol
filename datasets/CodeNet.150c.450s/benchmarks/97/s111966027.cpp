
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
#include <functional>
#include <cassert>

using namespace std;
typedef complex<int> P;


bool solve(){
	int n;
	cin>> n;
	if(!n) return false;
	vector<P> vc;
	vc.push_back((0,0));
	
	P dxdy[4]={P(-1,0),P(0,-1),P(1,0),P(0,1)};
	for(int i=1;i<n;i++){
		P in;
		int n, d;
		cin>> n>> d;
		in = vc[n] + dxdy[d];
		vc.push_back(in);
	}
	
	int wmax, wmin, hmax, hmin;
	for(int i=0;i<vc.size();i++){
		if(i==0){
			wmax = vc[i].real();
			wmin = vc[i].real();
			hmax = vc[i].imag();
			hmin = vc[i].imag();
		}else{
			wmax = max(wmax, vc[i].real());
			wmin = min(wmin, vc[i].real());
			hmax = max(hmax, vc[i].imag());
			hmin = min(hmin, vc[i].imag());
		}
	}
	cout<< wmax - wmin + 1 << " "<< hmax - hmin + 1 << endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	while(solve());

	return 0;
}

 