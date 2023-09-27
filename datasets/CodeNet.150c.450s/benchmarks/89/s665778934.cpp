
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


vector<int> pnum;

int prime(int a){
	if(a == 1) return false;
	if(a == 2) return true;
	for(int i=2;i<sqrt(a)+1;i++){
		if(a%i==0) return false;
	}
	return true;
}

bool solve(){
	int a, b, n;
	cin>> a>> b>> n;
	if(a==0 && b==0 && n==0) return false;
	
	int cnt = 0;
	while(1){
		if(prime(a)) cnt++;
		if(cnt>=n) break;
		a += b;
	}
	
	cout<< a<< endl;
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	while(solve());

	return 0;
}

 