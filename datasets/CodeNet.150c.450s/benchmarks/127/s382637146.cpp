#include<stdio.h>
#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>
#include <map>
#include <functional>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <queue>
#include<iomanip>
#include<bitset>
#include<stack>
#include<set>
#include<limits>
#include <complex>
#include<cstdlib>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()


pair<long long int,int> getans(long long int a) {
	if (a == 0) {
		return make_pair(0, 0);
	}
	else if (a == 1) {
		return make_pair(1, 0);
	}

}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		string st; cin >> st;
		set<string>aset;
		for (int i = 0; i <= st.size(); ++i) {
			for (int j = 0; j < 4; ++j) {
				string a = st.substr(0, i);
				string b = st.substr(i, st.size() - i);
				if (j % 2) {
					reverse(a.begin(), a.end());
				}
				if (j / 2) {
					reverse(b.begin(), b.end());
				}
				aset.emplace(a + b);
				aset.emplace(b + a);
			}
		}
		cout << aset.size() << endl;
	}
	return 0;
}