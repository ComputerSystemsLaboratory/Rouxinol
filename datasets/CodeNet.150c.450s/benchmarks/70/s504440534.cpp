#include <iostream>

using namespace std;

int main() {

	int m, d;
	int day[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char week[][16]={"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};

	while(cin >> m >> d) {
		if(m==0&&d==0)
			break;

		for(int i=0; i<m-1; i++) {
			d+=day[i];
		}
 
		cout << week[d%7] << endl;

	}

	return 0;

}