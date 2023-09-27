
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
	
	string str[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};
	int hoge[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int m, d;
	while(1){
		cin>> m>> d;
		if(m==0&&d==0) break;
		int num = d;
		for(int i=0;i<m-1;i++){
			num += hoge[i];
		}
		int day = (2+num)%7;
		cout<< str[day]<< endl;
		
	}
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 