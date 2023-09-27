#include <iostream>

using namespace std;

int main(void){
	int m, d;
	int i;
	int term;
	int dow;

	while(cin >> m >> d){
		if(m == 0 && d == 0) break;

		term = 0;
		for(i=1;i<m;i++){
			if(i==2){
				term += 29;
			}else if(i==4||i==6||i==9||i==11){
				term += 30;			
			}else{
				term += 31;
			}
		}
		term += d - 1;

		dow = term % 7;

		switch(dow){
		case(0):
			cout << "Thursday" << endl;
			break;
		case(1):
			cout << "Friday" << endl;
			break;
		case(2):
			cout << "Saturday" << endl;
			break;
		case(3):
			cout << "Sunday" << endl;
			break;
		case(4):
			cout << "Monday" << endl;
			break;
		case(5):
			cout << "Tuesday" << endl;
			break;
		case(6):
			cout << "Wednesday" << endl;
			break;
		}
	}

	return 0;
}