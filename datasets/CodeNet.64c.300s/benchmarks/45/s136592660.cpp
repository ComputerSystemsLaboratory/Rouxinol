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
using namespace std;

int main(void) {
	int athNum, winUser, exRate;
	while (cin >> athNum >> winUser >> exRate, athNum) {
		int winBet;
		int betSum = 0;
		for (int i = 1; i <= athNum; i++) {
			int bet;
			cin >> bet;
			betSum += bet;
			if (i == winUser) {
				winBet = bet;
			}
		}
		
		if (!winBet) {
			cout << 0 << endl;
		}else {
			double exRate_d = (double)exRate / 100;
			betSum *= 100;
			int price = (int)((betSum - betSum * exRate_d) / winBet);
			cout << price << endl;
		}
	}

	return 0;
}