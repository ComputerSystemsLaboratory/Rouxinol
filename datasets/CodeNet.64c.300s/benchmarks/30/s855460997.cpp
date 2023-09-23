#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(void) {	
	int n;
	while (cin >> n && n > 0) {
		int ans = 0;
		n = 1000 - n;
		ans += n / 500;
		n %= 500;
		ans += n / 100;
		n %= 100;
		ans += n / 50;
		n %= 50;
		ans += n / 10;
		n %= 10;
		ans += n / 5;
		n %= 5;
		ans += n;
		
		cout << ans << endl;
		
	}
				  
	return 0;
}