/*
 * Spreadsheet.cpp
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
#define CL				clear
#define MP				make_pair

typedef unsigned int u_int;
typedef long long ll;

ll GetRowSum(vector<ll> a_vecRow);
ll GetColSum(ll a_iIndex, vector<vector<ll>> a_vecVal);
ll GetAllSum(vector<vector<ll>> a_vecVal);

int main(void) {
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> vecVal;
	REP(i, n) {
		vector<ll> vecRow;
		REP(j, m) {
			ll a = 0;
			cin >> a;
			vecRow.PB(a);
		}
		vecVal.PB(vecRow);
	}

	ll NewMatrix[n + 1][m + 1];
	REP(i, n + 1) {
		vector<ll> vecRow;
		if (i != n) {
			vecRow = vecVal.at(i);
		}
		REP(j, m + 1) {
			if ((i != n) && (j != m)) {
				NewMatrix[i][j] = vecRow.at(j);
			} else if (i != n) {
				NewMatrix[i][j] = GetRowSum(vecRow);
			} else if ((i == n) && (j != m)) {
				NewMatrix[i][j] = GetColSum(j, vecVal);
			} else if  ((i == n) && (j == m)) {
				NewMatrix[i][j] = GetAllSum(vecVal);
			}
		}
	}

	REP(i, n + 1) {
		REP(j, m + 1) {
			cout << NewMatrix[i][j];
			if (j != m) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

ll GetAllSum(vector<vector<ll>> a_vecVal) {
	ll iResult = 0;
	REP(i, a_vecVal.size()) {
		vector<ll> tmp = a_vecVal.at(i);
		REP(j, tmp.size()) {
			iResult += tmp.at(j);
		}
	}
	return iResult;
}

ll GetRowSum(vector<ll> a_vecRow) {
	ll iResult = 0;
	REP(i, a_vecRow.size()) {
		iResult += a_vecRow.at(i);
	}
	return iResult;
}

ll GetColSum(ll a_iIndex, vector<vector<ll>> a_vecVal) {
	ll iResult = 0;
	REP(i, a_vecVal.size()) {
		vector<ll> tmp = a_vecVal.at(i);
		iResult += tmp.at(a_iIndex);
	}
	return iResult;
}