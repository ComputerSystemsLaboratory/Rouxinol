
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


bool solve(){
	int a = 0;
	for(int i=0;i<2;i++){
		string str;
		cin>> str;
		int num = 1;
		for(int j=0;j<str.size();j++){
			char c = str[j];
			if(c == 'm'){
				a += num * 1000;
				num = 1;
			}else if(c == 'c'){
				a += num * 100;
				num = 1;
			}else if(c == 'x'){
				a += num * 10;
				num = 1;
			}else if(c == 'i'){
				a += num * 1;
				num = 1;
			}else{
				num = c - '0';
			}
		}
	}
	
	string ans;
	char c2[4] = {'m', 'c', 'x', 'i'};
	for(int i=0;i<4;i++){
		int n = a % 10;
		char c = n + '0';
		a /= 10;
		if(n != 0) ans += c2[3-i];
		if(n >= 2) ans += c;
	}
	reverse(ans.begin(), ans.end());
	cout<< ans<< endl;
	
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

 