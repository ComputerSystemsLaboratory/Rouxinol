#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <sstream>
using namespace std;

const string CHAR_SET[] = {
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

vector<string> split(const string &str, const string &delim = " ") {
	int start = 0, pos;
	vector<string> result;
	
	while ( (pos = str.find_first_of( delim, start) ) != string::npos ) {
		if (pos - start != 0)
			result.push_back( str.substr( start, pos - start) );
		start = pos + 1;
	}

	return result;
}

int main(void) {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++){
		string str;
		getline(cin, str);

		vector<string> strs = split(str, "0");
		string res = "";
		for (int i = 0; i < strs.size(); i++) {
			int index1 = strs[i][0] - '0' - 1;
			int index2 = (strs[i].size() - 1) % CHAR_SET[index1].size();
			res += CHAR_SET[index1][index2];
		}

		cout << res << endl;
	}

	return 0;
}