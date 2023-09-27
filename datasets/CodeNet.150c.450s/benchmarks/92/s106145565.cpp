#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"

int main() {
	string st;
	while (getline(cin,st)) {
		string a, b; 
		a = st.substr(0, st.find(" "));
		b = st.substr(st.find(" ") + 1);
		int aa = stoi(a); int bb = stoi(b);

		cout <<to_string(aa+bb).size() << endl;
	}
	return 0;
}