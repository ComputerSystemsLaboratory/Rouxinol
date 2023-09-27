#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;



int main() {
	vector<int> v(26, 0);
	string s;
	while (getline(cin, s)) {

		for (auto itr = s.begin(); itr != s.end(); itr++) {
			for (int i = 0; i < 26; i++) {
				if ('a' + i == *itr) v[i]++;
				if ('A' + i == *itr) v[i]++;
			}
		}
	}

	REP(i, 0, 26) {
		cout << (char)('a' + i) << " " << ':' << " " << v[i] << endl;
	}
	
	return 0;
}