#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <numeric>

typedef unsigned long long ULONG;
typedef long long LONG;
using namespace std;

#define PI 3.1415926535897932384626433
#define _DBG_

#define BIG 10000000000 //10

#define LAST 10000000 //10^7


LONG D;
vector<LONG> cost(26);
//vector<vector<ULONG>> sati(D + 1, vector<ULONG>(27));
vector<vector<LONG>> sati;
vector<LONG> answer;
vector<int> lastDate(26, -1);
LONG satVal = 0;


LONG calcSabunScore(int eventType, LONG date) {

	LONG sabun = sati[date][eventType];
	// costsum
	LONG costSum = 0;
	for (int i = 0; i < 26; i++) {
		if (i != eventType) {
			costSum += cost[i] * (date - lastDate[i]);
		}
	}

	sabun -= costSum;
	

	return sabun;

}


int main(void) {
	// for B

	cin >> D;

	vector<LONG> tmpans(D);
	answer = tmpans;


	for (int i = 0; i < 26; i++) {
		cin >> cost[i];
	}



	for (int d = 0; d < D; d++) {
		vector<LONG> tmpsati(26);
		for (int i = 0; i < 26; i++) {
			cin >> tmpsati[i];
		}
		sati.push_back(tmpsati);
	}
	// finish data input


	// answerを決める
	for (int d = 0; d < D; d++) {
		cin >> answer[d];
		answer[d] -= 1;
	}





	// calc score
	for (int d = 0; d < D; d++) {
		LONG sabun = calcSabunScore(answer[d], d);

		satVal += sabun;

		lastDate[answer[d]] = d;

		cout << satVal << endl;

	}



	return 0;
}