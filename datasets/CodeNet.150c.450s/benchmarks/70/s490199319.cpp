#include <iostream>
#include <string>
using namespace std;

int main(){
	int mon, day, total;
	string s;

	while ( 1 ){
		cin >> mon >> day;
		if ( !mon ) break;

		total = day;
		for ( int i = 1; i < mon; ++i ){
			switch ( i ){
				case 1 : case 3 : case 5 : case 7 :
				case 8 : case 10 : case 12:
					total += 31;
					break;
				case 2 :
					total += 29;
					break;
				case 4 : case 6 : case 9 : case 11 :
					total += 30;
					break;
			}
		}

		switch ( total % 7 ) {
			case 0 : s = "Wednesday"; break;
			case 1 : s = "Thursday"; break;
			case 2 : s = "Friday"; break;
			case 3 : s = "Saturday"; break;
			case 4 : s = "Sunday"; break;
			case 5 : s = "Monday"; break;
			case 6 : s = "Tuesday"; break;
		}

		cout << s << endl;
	}

	return 0;
}