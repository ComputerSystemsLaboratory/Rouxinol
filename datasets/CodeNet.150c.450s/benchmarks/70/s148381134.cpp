#include <iostream>
using namespace std;
int main(){
	int m,d;
	while(cin >> m >> d,m){
		int sum = 0;
		for(int i = 1; i < m; i++){
			switch(i){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
					sum += 31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					sum += 30;
					break;
				case 2:
					sum += 29;
					break;
				default:
					break;
			}
		}
		sum += d;
		switch(sum%7){
			case 0:
				cout << "Wednesday" << endl;
				break;
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
		}
	}
	return 0;
}