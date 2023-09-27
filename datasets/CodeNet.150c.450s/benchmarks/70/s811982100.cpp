// 2011/07/12 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int days[12];
	days[0]  = 0;
	days[1]  = days[0] +31;
	days[2]  = days[1] +29;
	days[3]  = days[2] +31;
	days[4]  = days[3] +30;
	days[5]  = days[4] +31;
	days[6]  = days[5] +30;
	days[7]  = days[6] +31;
	days[8]  = days[7] +31;
	days[9]  = days[8] +30;
	days[10] = days[9] +31;
	days[11] = days[10]+30;

	while(true){
		int m, d;
		cin >> m >> d;
		if(m==0)
			break;

		switch((days[m-1]+d)%7){
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