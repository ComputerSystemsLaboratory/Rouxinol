
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;


bool solve(){
	vector<int> a(5);
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	for(int i=0;i<5;i++){
		cout<<a[i];
		if(i!=4) cout<<" ";
	}
	cout<<endl;
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 