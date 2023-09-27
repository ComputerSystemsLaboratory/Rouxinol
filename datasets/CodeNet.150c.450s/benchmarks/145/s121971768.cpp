#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
using namespace std;


map<string, int> aa;
set<string> dic;

int main(){
	string a;

	while (cin >> a){
		dic.insert(a);
		++aa[a];
	}

	int m = 0;
	string ms;

	int m2 = 0;
	string ms2;


	for (auto x : dic){
		if (m < x.length()){
			m = x.length();
			ms = x;
		}
	}

	for (auto x : aa){
		if (m2 < x.second){
			ms2 = x.first;
			m2 = x.second;
		}
	}

	cout << ms2 << " " << ms << endl;

	return 0;
}