#include<iostream>
using namespace std;

int day(int month){
	switch(month){
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 2:
			return 29;
			break;
	}
}

int main(){
	int m, d, num;
	while(cin >> m >> d, m || d){
		num = 0;
		for(int i=1; i < m; i++){
			num += day(i);
		}
		num += d;
		switch(num % 7){
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
		}
	}
}