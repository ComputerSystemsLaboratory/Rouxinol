#include <iostream>
#include <string>
using namespace std;

int main(){
	int month, day,daynum,k;
	int num[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string youbi[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

	while (1){
		daynum = 0;
		cin >> month >> day;
		if (month == 0) break;
		for (int i = 1; i < month; i++){
			daynum += num[i];
		}
		daynum = daynum + day - 1;
		k = daynum % 7;
		cout << youbi[k] << endl;
	}
	return 0;
}