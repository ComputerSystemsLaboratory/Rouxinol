#include<iostream>
#include<string>
using namespace std;

class Days{
	string week;
public:
	Days() : week("Thursday"){}
	void calcDays(int,int);
	int monthToDays(int);
	void calcWeek(int);
	void setWeek(int);
	const string getWeek(void);
};

int Days::monthToDays(int month){
	if(month == 2)
		return 29;//うるう年
	if(month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	return 31;
}

void Days::calcDays(int month,int days){
	week = ("Thursday");//コンストラクタで初期化済みだが念のために
	int day = 0;//1月1日から何日経ったか
	for(int i = 1; i < month; i++){
		day += monthToDays(i);
	}
	day += (days - 1);
	calcWeek(day);
}

void Days::calcWeek(int day){
	setWeek(day %= 7);
}

const string Days::getWeek(void){
	return week;
}

void Days::setWeek(int day){
	switch(day){
	case 0:
		week = "Thursday";
		break;
	case 1:
		week = "Friday";
		break;
	case 2:
		week = "Saturday";
		break;
	case 3:
		week = "Sunday";
		break;
	case 4:
		week = "Monday";
		break;
	case 5:
		week = "Tuesday";
		break;
	case 6:
		week = "Wednesday";
		break;
	}
}

int main(){
	Days d;
	int month,day;
	while(1){
		cin >> month >> day;
		if(month == 0 || day == 0)
			break;
		d.calcDays(month,day);
		cout << d.getWeek() << endl;
	}
	return 0;
}