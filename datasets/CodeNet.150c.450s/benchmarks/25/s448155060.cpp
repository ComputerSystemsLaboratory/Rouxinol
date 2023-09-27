#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"
 


int main() {
	string st;
	vector<int>nums(26);
	while (getline(cin, st)) {

		for (auto c : st) {
			if (c <= 'z'&&c >= 'a')nums[c - 'a']++;
			if (c <= 'Z'&&c >= 'A')nums[c - 'A'] ++;
		}
	}
	for (int i = 0; i < 26; ++i) {
		cout << char('a' + i) << " : " << nums[i] << endl;
	}
	return 0;
}