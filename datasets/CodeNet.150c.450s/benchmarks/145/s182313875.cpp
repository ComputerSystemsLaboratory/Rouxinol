
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>
#include <climits>
#include <set>

using namespace std;

double sq(double x){return x*x;}

int main(){
	string x;
	map<string,int> s;
	int max_len = 0;
	string m_str;
	while(cin>>x){
		s[x]++;
		if(max_len < x.length()){
			max_len = x.length();m_str = x;
		}
	}

	int m = 0;
	string r;
	for(map<string,int>::iterator it = s.begin(); it != s.end(); ++it){
		if(m < (*it).second)
			m = (*it).second,r = (*it).first;
	}

	cout << r << " " << m_str << endl;

	return 0;
}