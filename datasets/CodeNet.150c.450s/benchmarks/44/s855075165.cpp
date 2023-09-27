#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	vector<int>as(4), bs(4);
	while (cin >> as[0]) {
		for (int i = 0; i < 3; ++i) {
			cin >> as[i + 1];
		}
		for (int i = 0; i < 4; ++i) {
			cin >> bs[i];
		}
		int hit = 0, blow = 0;
		for (int i = 0; i < 4;++i){
			if (as[i] == bs[i])hit++;
			for (int j = 0; j < 4; ++j) {
				if (i == j)continue;
				if (as[i] == bs[j])blow++;
			}
		}
		
		cout << hit << " " << blow << endl;
	}
	return 0;
}