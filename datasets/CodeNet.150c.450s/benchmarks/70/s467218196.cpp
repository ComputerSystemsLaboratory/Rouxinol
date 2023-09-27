#include <iostream>
#include <string>
using namespace std;

string weekday[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int monthday[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){

	while (true){
		int m, d, days=0;
		cin>>m>>d;
		if (m==0) break;
		for (int i=0; i<m-1; i++){
			days += monthday[i];
		}
		int dif = days + d - 1;
		cout<<weekday[(dif+3)%7]<<endl;
	}
	return 0;
}