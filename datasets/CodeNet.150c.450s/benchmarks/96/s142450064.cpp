
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
	vector<string> a(10);
	a[1] = ".,!? ";
	a[2] = "abc";
	a[3] = "def";
	a[4] = "ghi";
	a[5] = "jkl";
	a[6] = "mno";
	a[7] = "pqrs";
	a[8] = "tuv";
	a[9] = "wxyz";
	a[0] = "";
	
	string str;
	cin>> str;
	int n = str.size();
	int pre;
	int cnt = 0;
	for(int i=0;i<n;i++){
		int num = str[i] - '0';
		if(i==0){
			pre = num;
			continue;
		}
		if(pre == num){
			cnt++;
		}else{
			if(pre != 0){
				cout<< a[pre][cnt % a[pre].size()];
			}
			cnt = 0;
		}
		pre = num;
	}
	cout<< endl;
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

 