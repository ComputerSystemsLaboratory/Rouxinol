#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <random>
#include <cmath>
#include <iomanip>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>
#include <bitset>
#include <sstream>
#include <new>
#include <typeinfo>
#include <iterator>

typedef long long ll;
typedef unsigned long long ull;
constexpr ll mop = 1000000007;
constexpr ll mop2 = 998244353;

using namespace std;

struct Output {
private:
	vector<ll> contestList;
	
public:
	
	
};


class Input {
	vector<ll> decreaseRates;
	vector<vector<ll>> satisfacitons;
	ll numContests = 26;
	ll numDay = 365;
	vector<ll> contestList;
	vector<ll> lastContest;
	
public:
	void initialize() {
		contestList.resize(numDay + 1);
		lastContest.resize(numContests + 1);
	}
	void readInputs() {
		decreaseRates.resize(numContests + 1);
		for (ll i = 1; i <= numContests; i++) {
			cin >> decreaseRates[i];
		}
		satisfacitons.resize(numDay + 1);
		for (ll i = 1; i <= numDay; i++) {
			satisfacitons[i].resize(numContests + 1);
			for (ll j = 1; j <= numContests; j++) {
				cin >> satisfacitons[i][j];
			}
		}
	}

	ll getNumContests() { return numContests; }
	ll getNumDay() { return numDay; }
	vector<ll> getDecreaseRates() { return decreaseRates; }
	vector<vector<ll>> getSatisfactions() { return satisfacitons; }
	ll getContest(ll day) {
		return contestList[day];
	}
	vector<ll> getContestList() { return contestList; }
	void setNumContests(ll num) { numContests = num; }
	void setNumDay(ll day) { numDay = day; }
	void setContest(ll day, ll contest) {
		contestList[day] = contest;
	}

	

	ll calcScore() {
		ll score = 0;
		
		for (ll day = 1; day <= numDay; day++) {
			ll dayContest = contestList[day];
			lastContest[dayContest] = day;
			score += satisfacitons[day][dayContest];
			for (ll contest = 1; contest <= numContests; contest++) {
				score -= decreaseRates[contest] * (day - lastContest[contest]);
			}
			cout << score << endl;
		}

		return score;
	}

};




int main() {
	ll numDay;
	cin >> numDay;

	Input input;
	input.setNumDay(numDay);
	input.initialize();
	input.readInputs();
	for (ll i = 1; i <= numDay; i++) {
		ll contest;
		cin >> contest;
		input.setContest(i, contest);
	}
	ll score = input.calcScore();
	
}
