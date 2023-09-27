#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

struct data_t {
	int hh;
	int mm;
	int ss;

	bool operator<(const data_t& right) const {
		if ( hh ==  right.hh ) {
			if ( mm == right.mm ) {
				return ( ss == right.ss ) || ( ss < right.ss );
			}
			else {
				return ( mm < right.mm );
			}
		}
		else {
			return ( hh < right.hh );
		}
	}
};

bool is_early(data_t d1, data_t d2) {
	if (d1.hh == d2.hh) {
		if (d1.mm == d2.mm) {
			return (d1.ss < d2.ss);
		}
		else {
			return (d1.mm < d2.mm);
		}
	}
	else {
		return (d1.hh < d2.hh);
	}
}

int main(void) {
	int n;
	cin >> n;

	char c;
	while ( n != 0 ) {
		std::vector<data_t> start(n+1); 
		std::vector<data_t> stop(n+1); 
		for (int i = 0; i < n; i++) {
			cin >> start[i].hh;
			cin >> c;
			cin >> start[i].mm;
			cin >> c;
			cin >> start[i].ss;

			cin >> stop[i].hh;
			cin >> c;
			cin >> stop[i].mm;
			cin >> c;
			cin >> stop[i].ss;
		}

		start[n].hh = 100;
		start[n].mm = 100;
		start[n].ss = 100;
		stop[n].hh = 100;
		stop[n].mm = 100;
		stop[n].ss = 100;
		std::sort(start.begin(), start.end());
		std::sort(stop.begin(), stop.end());

		std::stack<bool> train;
		int count_t = 0;
		int r1 = 0;
		int r2 = 0;
		for (int i = 0; i < (n*2); i++) {
			if (is_early(start[r1],stop[r2])) {
				if (train.empty()) {
					count_t++;
				}
				else {
					train.pop();
				}
				r1++;
			}
			else {
				train.push(true);
				r2++;
			}
		}

		cout << count_t << endl;
		cin >> n;
	}

	return 0;
}