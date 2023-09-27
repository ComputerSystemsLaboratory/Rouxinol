/*
 * CardGame.cpp
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

void compareCards(const vector<string> a_vecTarosCards, const vector<string> a_vecHanakosCards);

int main(void) {
	int iTurnNum = 0;
	cin >> iTurnNum;
	vector<string> vecTarosCards;
	vector<string> vecHanakosCards;
	REP(i, iTurnNum) {
		string strTarosCard, strHanakosCard;
		cin >> strTarosCard >> strHanakosCard;
		vecTarosCards.PB(strTarosCard);
		vecHanakosCards.PB(strHanakosCard);
	}

	compareCards(vecTarosCards, vecHanakosCards);

	return EXIT;
}

void compareCards(const vector<string> a_vecTarosCards, const vector<string> a_vecHanakosCards) {

	int iTurnNum = a_vecTarosCards.size();
	int iTarosPoints = 0;
	int iHanakosPoints = 0;
	REP(i, iTurnNum) {
		string Taro = a_vecTarosCards.at(i);
		string Hanako = a_vecHanakosCards.at(i);

		bool bTaroWin	= lexicographical_compare(Hanako.begin(), Hanako.end(), Taro.begin(), Taro.end());
		bool bHanakoWin = lexicographical_compare(Taro.begin(), Taro.end(), Hanako.begin(), Hanako.end());

		if (bTaroWin && !bHanakoWin) {
			iTarosPoints += 3;
		} else if (!bTaroWin && bHanakoWin) {
			iHanakosPoints += 3;
		} else if (bTaroWin == bHanakoWin) {
			iTarosPoints += 1;
			iHanakosPoints += 1;
		}
	}
	cout << iTarosPoints << " " << iHanakosPoints << endl;
}