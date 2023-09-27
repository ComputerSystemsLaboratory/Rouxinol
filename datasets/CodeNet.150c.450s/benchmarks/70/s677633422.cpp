#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int days[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31};
	string ans[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int month, date,day,p;

	//前月までの延べ日数に変換
	for( int i = 1; i < 13; i++ ) {
		days[i] += days[i-1];
	}

	while( 1) {
		cin >> month >> date;
		if( month == 0 )
			break;
		
		day = days[month-1] + date + 3;
		p = day %7;

		cout << ans[p] << endl;

	}
	return 0;
}