#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int s = str.size();
		set<string> dt;
		for (int i=1; i<s; i++) {
			string s1, s2, rs1, rs2;
			s1 = string(str.begin(), str.begin()+i);
			s2 = string(str.begin()+i, str.end());
			rs1 = string(s1.rbegin(), s1.rend());
			rs2 = string(s2.rbegin(), s2.rend());
			dt.insert( s1+ s2);
			dt.insert( s1+rs2);
			dt.insert(rs1+ s2);
			dt.insert(rs1+rs2);
			dt.insert( s2+ s1);
			dt.insert( s2+rs1);
			dt.insert(rs2+ s1);
			dt.insert(rs2+rs1);
		}

		cout << dt.size() << endl;
	}

	return 0;
}