#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string n;
	int l;
	while (cin >> n >> l, l) {
		vector<int> v;
		int cur, nex, lmax, _lmin;
		bool f = 1;
		while (f) {
			while (n.size() != l) n = "0" + n;
			cur = atoi(n.c_str());
			v.push_back(cur);
			int lmin, lmax;
			sort(n.begin(), n.end());
			lmin = atoi(n.c_str());
			sort(n.rbegin(), n.rend());
			lmax = atoi(n.c_str());
			int nex = lmax - lmin;
			for (int j = 0; j < v.size(); j++) {
				if (v[j] == nex) {
					cout << j << " " << nex << " " << v.size()-j << endl;
					f = 0;
				}
			}
			stringstream ss;
			ss << nex;
			n = ss.str();
		}
	}
	
	return 0;
}