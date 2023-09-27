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

Int aa[120];

int main(){
	int a  = -1;
	while (cin >> a){
		++aa[a];
	}

	Int b = 0;

	REP(i, 120){
		b = max(b, aa[i]);
	}

	REP(i, 120){
		if (aa[i] == b)
			cout << i << endl;
	}

	return 0;
}