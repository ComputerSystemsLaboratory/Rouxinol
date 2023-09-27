#include<iostream>

using namespace std;

int main(){
	
	int Md[12] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30}; 
	int month;
	int day;
		
	while( cin >> month >> day ) {
	
	if( month == 0 && day == 0)
	break;
	
	if( month == 1 && day == 1) {
		
	cout << "Thursday\n";
	continue;
	
	}
	if( month == 1 && day == 2) {
		
	cout << "Friday\n";
	continue;
	
	}
	if( month == 1 && day == 3) {
		
	cout << "Saturday\n";
	continue;
	
	}
	if( month == 1 && day == 4) {
		
	cout << "Sunday\n";
	continue;
	
	}
	for(int i=0;i<month;i++)
	day += Md[i];
	
	switch( (day - 4) % 7) {
		
		case 1:
		cout << "Monday\n";
		break;
		
		case 2:
		cout << "Tuesday\n";
		break;
		
		case 3:
		cout << "Wednesday\n";
		break;
		
		case 4:
		cout << "Thursday\n";
		break;
		
		case 5:
		cout << "Friday\n";
		break;
		
		case 6:
		cout << "Saturday\n";
		break;
		
		default:
		cout << "Sunday\n";
		break;
		
	}
	
	//cout << day; 
}
    return 0;
}
