
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
	vector<int> a(100,0);
	int n;
	while(cin>>n){
		a[n-1]++;
	}
	int num=0;
	for(int i=0;i<100;i++){
		num = max(num,a[i]);
	}
	for(int i=0;i<100;i++){
		if(a[i] == num) cout<< i+1<< endl;
	}
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 