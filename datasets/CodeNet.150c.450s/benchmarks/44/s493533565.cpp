
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
#include <cassert>

using namespace std;


bool solve(){
	int a[4], b[4];
	while(cin>>a[0]){
		cin>> a[1]>> a[2]>> a[3]>> b[0]>> b[1]>> b[2]>> b[3];
		int ans1 = 0;
		int ans2 = 0;
		for(int i=0;i<4;i++){
			if(a[i] == b[i]) ans1++;
			for(int j=0;j<4;j++){
				if(a[i] == b[j]) ans2++;
			}
		}
		ans2 -= ans1;
		cout<< ans1<< " "<< ans2<< endl;
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 