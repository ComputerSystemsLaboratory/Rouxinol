//============================================================================
// Name        : Test2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define rep(i,n) for(int i = 0;i<(n);i++)

using namespace std;

int main() {
	int M;
	cin >> M;
	rep(_M,M){
		string s;
		set<string> all;
		cin >> s;
		all.clear();
		for(int i = 1;i<s.size();i++){
			string L = s;L.resize(i);
			string R = s.substr(i);
			string LI = L;reverse(L.begin(),L.end());
			string RI = R;reverse(R.begin(),R.end());
			all.insert(L+R);
			all.insert(R+L);
			all.insert(L+RI);
			all.insert(RI+L);
			all.insert(R+LI);
			all.insert(LI+R);
			all.insert(LI+RI);
			all.insert(RI+LI);
		}
		cout << all.size() << endl;
	}
	return 0;
}