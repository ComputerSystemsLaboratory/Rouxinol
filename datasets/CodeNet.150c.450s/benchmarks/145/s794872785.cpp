
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
	int maxsize=0;
	int maxcnt=0;
	int ans_num;
	int ans_num2;
	vector<string> str_v;
	
	string in;
	while(cin>>in){
		str_v.push_back(in);
		if(maxsize < in.size()){
			maxsize = in.size();
			ans_num = str_v.size()-1;
		}
	}
	for(int i=0;i<str_v.size();i++){
		int cnt=0;
		for(int j=0;j<str_v.size();j++){
			if(str_v[i] == str_v[j]) cnt++;
		}
		if(maxcnt < cnt){
			maxcnt = cnt;
			ans_num2 = i;
		}
	}
	
	cout<< str_v[ans_num2]<< " "<< str_v[ans_num]<< endl;
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 