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
	int n,a=100000;
	cin >> n;
	REP(i, 0, n) {
		a *= 1.05;
		if (a % 1000 != 0) {
			a -= a % 1000;
			a += 1000;
		}
		
		
	}
	cout << a << endl;
	return 0;
}