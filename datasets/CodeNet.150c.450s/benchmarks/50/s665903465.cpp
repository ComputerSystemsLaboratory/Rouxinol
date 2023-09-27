
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
	int coin[6] = {500,100,50,10,5,1};
	while(1){
		int in;
		cin>> in;
		if(!in) break;
		int ans=0;
		in = 1000 - in;
		for(int i=0;i<6;i++){
			int c = coin[i];
			ans += in / c;
			in = in - c*(in/c);
		}
//		assert(in==0);
		cout<< ans<< endl;
	}

	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 