#include <iostream>

using namespace std;

int main() {

	int m, d;

	while(cin >> m >> d) {
		if(m==0&&d==0)
			break;

		switch(m) {
			case 1:
				d+=0;
				break;
			case 2:
				d+=31;
				break;
			case 3:
				d+=60;
				break;
			case 4:
				d+=91;
				break;
			case 5:
				d+=121;
				break;
			case 6:
				d+=152;
				break;
			case 7:
				d+=182;
				break;
			case 8:
				d+=213;
				break;
			case 9:
				d+=244;
				break;
			case 10:
				d+=274;
				break;
			case 11:
				d+=305;
				break;
			case 12:
				d+=335;
		}
 
		d%=7;
		switch(d) {
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
		}
	}

	return 0;

}