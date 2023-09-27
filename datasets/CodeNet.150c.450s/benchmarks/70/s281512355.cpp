#include <iostream>
#include <string>

using namespace std;

int main(){
	

	int dc[13];
	dc[1]=31;
	dc[2]=29;
	dc[3]=31;
	dc[4]=30;
	dc[5]=31;
	dc[6]=30;
	dc[7]=31;
	dc[8]=31;
	dc[9]=30;
	dc[10]=31;
	dc[11]=30;
	dc[12]=31;

	string week[8];
	week[0]="Monday";
	week[1]="Tuesday";
	week[2]="Wednesday";
	week[3]="Thursday";
	week[4]="Friday";
	week[5]="Saturday";
	week[6]="Sunday";

	int month;
	int day;
	while(cin>>month>>day&&!(month==0&&day==0)){
		int passingDay=2;
		for(int i = 1; i < month; i++){
			passingDay+=dc[i];
		}
		passingDay+=day;
		cout<<week[passingDay%7]<<endl;
	}

	return 0;
}