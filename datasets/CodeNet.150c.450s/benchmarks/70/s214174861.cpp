#include<iostream>
using namespace std;

int n[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int totalday(int month, int day){
	int res = 0;
	for(int i=1; i<month; i++){
		res += n[i-1];
	}
	res += day;
	return res;
}

int main(void) {
	int month, day;
	while(cin >> month >> day){
		if(month==0 && day==0) break;
		int total = totalday(month, day);
		total = total % 7;

		switch(total){
		case 1:
			cout << "Thursday" << endl;
			break;
		case 2:
			cout << "Friday" << endl;
			break;
		case 3:
			cout << "Saturday" << endl;
			break;
		case 4:
			cout << "Sunday" << endl;
			break;
		case 5:
			cout << "Monday" << endl;
			break;
		case 6:
			cout << "Tuesday" << endl;
			break;
		case 0:
			cout << "Wednesday" << endl;
			break;
		}
	}
	return 0;
}