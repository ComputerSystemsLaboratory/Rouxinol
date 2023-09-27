#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

#define SPACE string(" ")
using namespace std;

int main(void) {
	int r, c;
	cin >> r >> c;

	cin >> ws;

	string str;
	vector<string> v;
	int *psum = new int[c + 1]();

	for (int i = 0; i < r; i++) {
		getline(cin, str);

		string::size_type spos = 0;
		string::size_type epos = 0;
		int wsum = 0, j = 0, n;
		while ((epos = str.find(SPACE, spos)) != string::npos) {
			n = atoi(str.substr(spos, epos - spos).c_str());
			spos = epos + SPACE.length();
			wsum += n;
			psum[j++] += n;
		}
		n = atoi(str.substr(spos).c_str());
		wsum += n;
		psum[j++] += n;

		psum[j] += wsum;

		stringstream ss;
		ss << str << " " << wsum;
		v.push_back(ss.str());
	}

	stringstream sss;
	for (int k = 0; k < c; k++) {
		sss << psum[k] << " " ;
	}
	sss << psum[c];
	v.push_back(sss.str());

	for (int l = 0; l < v.size(); l++) {
		cout << v[l] << endl;
	}

	delete[] psum;

	return 0;
}