
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <algorithm>

using namespace std;


bool solve(){
	int d;
	while(cin>>d){
		int n = 600/d;
		int sum=0;
		for(int i=1;i<n;i++){
			sum += d * (i*d)*(i*d);
		}
		cout<< sum<< endl;
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(5);
	solve();

	return 0;
}

 