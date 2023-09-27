/*
 * Shuffle.cpp
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

void shuffle(vector<int> a_vecShuffle, string& a_rstrTargetCards);

int main(void) {

	vector<string> vecResult;
	while(1) {
		string strTargetCards;
		cin >> strTargetCards;
		if ("-" == strTargetCards) {
			break;
		}

		int iShuffleNum = 0;
		cin >> iShuffleNum;
		vector<int> vecShuffle;
		REP(i, iShuffleNum) {
			int iNum;
			cin >> iNum;
			vecShuffle.PB(iNum);
		}

		shuffle(vecShuffle, strTargetCards);

		vecResult.PB(strTargetCards);
	}

	REP(i, vecResult.size()) {
		cout << vecResult.at(i) << endl;
	}

	return EXIT;
}

void shuffle(vector<int> a_vecShuffle, string& a_rstrTargetCards) {
	REP(i, a_vecShuffle.size()) {
		int iNum = a_vecShuffle.at(i);
		string strTmp = a_rstrTargetCards;
		string strLeft	= strTmp.substr(0, iNum);
		string strRight	= strTmp.substr(iNum, a_rstrTargetCards.size() - 1);
		a_rstrTargetCards = strRight + strLeft;
	}
}