#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int Y,M,D;


	for (int i = 0; i <= n-1; i++){
		cin >> Y >> M >> D;
		int year = Y;
		int month = M;
		int day = D;
		int num = 0;

		while ( !(year == 1000) ){
			num++;
			day++;
			if ((year%3 == 1)||(year%3 == 2)){
				if ((month%2 == 1)&&(day == 21)){
					month++;
					day = 1;
					if (month == 11){
						year++;
						month = 1;
					}
				}
				else if ((month%2 == 0)&&(day == 20)){
					month++;
					day = 1;
					if (month == 11){
						year++;
						month = 1;
					}
				}
			}
			else if (year%3 == 0){
				if (day == 21){
					month++;
					day = 1;
					if (month == 11){
						year++;
						month = 1;
					}
				}
			}
			//cout << "year: " << year << "month: " << month << "day: " << day << endl;
		}
		cout << num << endl;
	}
}