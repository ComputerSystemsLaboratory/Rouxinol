#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>
#include <math.h>
#include <numeric>
#include <set>

using namespace std;
typedef long long Int;
#define REP(i , x) for(Int i = 0 ; i < x ; ++i)
typedef pair<int, int> P;


int main()
{
	set<int> member;

	vector<int> no;

	int a;
	while (cin >> a){
		member.insert(a);
	}

	REP(i, 30){
		if (member.find(i + 1) == member.end())
			no.push_back(i + 1);
	}
	sort(no.begin(), no.end());

	for (auto x : no){
		cout << x << endl;
	}

	return 0;
}