#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;



int main() {
	vector<int> table;
	int n;
	while(cin >> n, n) {
		table.clear();
		int cnt=0;
		for(int i=1; i<=n/2+1; i++) {
			for(int j=0; j<table.size(); j++) {
				table[j] = table[j] + i;
				if(table[j] >= n) {
					if(table[j] == n)
						cnt++;
					table.erase(table.begin() + j);
					j--;
				}
			}
			table.push_back(i);
		}
		cout << cnt << endl;
	}
	return 0;
}