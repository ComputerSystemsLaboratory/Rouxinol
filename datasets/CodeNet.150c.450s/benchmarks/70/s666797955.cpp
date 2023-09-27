#include <iostream>
#include <string>
using namespace std;
int main(void){
	const int DPM[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	const string DAYS[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int month,date;
	while(cin >> month >> date){
		if(month==0)break;
		int day = 3;
		for(int i=1;i<month;++i) day += DPM[i-1];
		day = (day+date-1)%7;
		cout << DAYS[day] << "\n";
	}
	return 0;
}