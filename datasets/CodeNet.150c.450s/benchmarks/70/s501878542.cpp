#include <iostream>
#include <string>
using namespace std;

int main(){
	int mon, day, week;
	string ans[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int start_week[13] = {-1, 3, 6, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2};
	while(cin >> mon >> day){
		if(mon==0 && day==0){
			break;
		}
		week = start_week[mon]+day-1;
		week %= 7;
		cout << ans[week] << endl;
	}
	return 0;
}