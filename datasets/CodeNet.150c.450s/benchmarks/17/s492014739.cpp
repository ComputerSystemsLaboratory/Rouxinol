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

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
using namespace std;

int main(){
	int n = 5;

	vector<int> aa;

	REP(i, n){
		int a;
		cin >> a;
		aa.push_back(a);
	}

	sort(aa.begin(), aa.end(),greater<int>());

	int i(0);
	for (auto x : aa){
		cout << x;
		if (i != 4){
			cout << " ";
		}
		++i;
	}
	cout << endl;

	return 0;
}