#include <iostream>
#include <string>
using namespace std;

string weekday(int n){
	switch(n){
	case 0:	return "Monday";
	case 1: return "Tuesday";
	case 2: return "Wednesday";
	case 3: return "Thursday";
	case 4: return "Friday";
	case 5: return "Saturday";
	case 6: return "Sunday";
	}
}

int monthdays(int m){
	switch (m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return 29;
	}
	return 0;
}

int days(int m, int d){
	int s=0;
	for (int i=1; i<m; i++)
		s += monthdays(i);
	return s+d;
}

int main(void){
	
	while (true){
		int m,d;
		cin>>m>>d;
		if (m==0) break;
		int dif = days(m, d)-1;
		cout<<weekday((dif+3)%7)<<endl;
	}
	return 0;
}