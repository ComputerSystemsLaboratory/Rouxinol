#include<iostream>

using namespace std;

int main()
{
	for(;;){
		int month;
		int day;
		int flg;
		int i;
		
		int past = 0;
		
		cin >> month;
		cin >> day;
		
		if(month == 0 && day == 0){
			break;
		}
		
		
	//	cout << month << day << endl;
		
		
		for(i = 0; i < month-1; i++){
			if(i == 1){
				past+=29;
			}
			else if(i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9|| i == 11){
				past += 31;
			}
			else{
				past += 30;
			}
		}
		
		past += day-1;
		past%=7;
		
		switch(past){
			case 0:
				cout << "Thursday" << endl;
				break;
			case 1:
				cout << "Friday" << endl;
				break;
			case 2:
				cout << "Saturday" << endl;
				break;
			case 3:
				cout << "Sunday" << endl;
				break;
			case 4:
				cout << "Monday" << endl;
				break;
			case 5:
				cout << "Tuesday" << endl;
				break;
			case 6:
				cout << "Wednesday" << endl;
				break;
		}
	}
}