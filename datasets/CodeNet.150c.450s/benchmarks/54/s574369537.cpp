/*
 * Finding_a_Word.cpp
 *
 *  Created on: 2014/08/03
 *      Author: WanWan1985
 */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

// for util
#define FOR(i, a, b) 	for(int i = (a); i < (b); i++)
#define REP(i, n)		FOR(i, 0, n)
#define PB				push_back
#define MP				make_pair
#define CL				clear
#define EXIT			(0)

typedef unsigned int u_int;
typedef long long ll;

int strcmp(string lhs, string rhs);

int main(void) {

	string strTargetWord;
	cin >> strTargetWord;

	int iCounter = 0;
	string strWord;
	while (cin >> strWord) {

		string::size_type pos = strWord.find("END_OF_TEXT", 0);
		if (pos != string::npos) {
			break;
		}

		if (!strcmp(strWord, strTargetWord)) {
			iCounter++;
		}
	}
	cout << iCounter << endl;

	return EXIT;
}

int strcmp(string lhs, string rhs) {
	transform(lhs.begin(), lhs.end(), lhs.begin(), ::toupper);
	transform(rhs.begin(), rhs.end(), rhs.begin(), ::toupper);
	return lhs.compare(rhs);
}