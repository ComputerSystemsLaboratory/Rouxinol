
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iomanip>

typedef long long ll;
using namespace std;


const int MAX = 25*3600;

bool solve(){
	
	int n;
	cin>> n;
	if(!n) return false;
	
	vector<int> v(MAX,0);
	for(int k=0;k<n;k++){
		int in[2] = {0};
		for(int i=0;i<2;i++){
			int h,m,s;
			char c[2];
			cin>> h>> c[0]>> m>> c[1]>> s;
			in[i] = 3600 * h + 60 * m + s;
		}
		for(int i=in[0]; i<in[1]; i++) v[i]++;
	}
	
	cout<< *max_element(v.begin(), v.end()) << endl;

	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	
	while(solve());

	return 0;
}

 