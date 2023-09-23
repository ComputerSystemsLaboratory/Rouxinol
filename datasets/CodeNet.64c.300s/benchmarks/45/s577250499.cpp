
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
	
	int n, m, p;
	cin>> n>> m>> p;
	if(n==0 && m==0 && p==0) return false;
	
	int a=0, b=0;
	for(int i=0;i<n;i++){
		int in;
		cin>> in;
		a += in;
		if(i == m-1) b = in;
	}
	if(b==0){	//気付かぬ…
		cout<< 0<< endl;
	}else{
		cout<< a*100 * (100-p)/100 / b<< endl;
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	while(solve());

	return 0;
}

 