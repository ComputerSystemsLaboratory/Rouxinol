#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#include <deque>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;



int main() {
	vector<int> v(5);
	REP(i, 0, 5) cin >> v[i];
	SORT(v);
	for (int i = 4; i > -1;i--) {
		if(i!=0)  cout << v[i] <<" ";
		else cout << v[i] << endl;
	}

	return 0;
}