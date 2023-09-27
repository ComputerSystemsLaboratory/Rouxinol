#include <bits/stdc++.h>
using namespace std;

class DayOfWeek {
	static const int m_startw = 4;

	int m_month;
	int m_day;

public:
	DayOfWeek( int mon, int day ):
		m_month( mon-1 ),
		m_day( day-1 )
	{}

	int days() const {
		static const int mdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

		int d = m_day;
		for( int i = 0; i < m_month; ++i ) {
			d += mdays[i];
		}

		return d;
	}

	string name() const {
		static const string names[] = {
			"Sunday",
			"Monday",
			"Tuesday",
			"Wednesday",
			"Thursday",
			"Friday",
			"Saturday"
		};

		return names[(days() + m_startw) % 7];
	}
};

int main() {
	ios_base::sync_with_stdio( false );

	int m, d;
	while( cin >> m >> d ) {
		if( m == 0 ) { break; }

		cout << DayOfWeek( m, d ).name() << '\n';
	}
}

