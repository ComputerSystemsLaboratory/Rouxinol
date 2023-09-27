#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

string str, rstr;

int main() {
	cin >> str;

	rstr = "";

	int len = str.size();
	for (int i = 0; i < len; i++) {
		rstr += str[len - i - 1];
	}

	cout << rstr << endl;

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/