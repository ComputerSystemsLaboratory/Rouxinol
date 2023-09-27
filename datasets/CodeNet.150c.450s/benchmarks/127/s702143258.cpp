#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

#define FOR(i,s,e) for((i)=(s);(i)<(int)(e);(i)++)

#define rev(s) (string((s).rbegin(), (s).rend()))

int main() {
	int i, j, k;
	int n;
	string s;
//	set<string> ss;

	scanf("%d ", &n);
	for (k=0; k<n; k++) {
	set<string> ss;
//		ss.clear();
		cin >> s;
		for (i=0; i<s.size()-1; i++) {
			string h = s.substr(0,i+1);
			string t = s.substr(i+1);

			for (j=0; j<2; j++) {
				ss.insert(h+t);
				ss.insert(rev(h)+t);
				ss.insert(h+rev(t));
				ss.insert(rev(h)+rev(t));
				if (j==0) {swap(h, t);} 
			}
		}
		cout << ss.size() << endl;
	}

	return 0;
}