#include<iostream>
#include<string>
int main(){
	int month,day;
	const int monthday[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	const std::string week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	const int a=3;
	while(1){
		std::cin>>month>>day;
		if(month==0)break;
		int sum=day+a;
		for(int i=0;i<month-1;i++)sum+=monthday[i];
		std::cout<<week[(sum-1)%7]<<std::endl;
	}
	return 0;
	/*
	月曜日 Monday
	火曜日 Tuesday
	水曜日 Wednesday
	木曜日 Thursday
	金曜日 Friday
	土曜日 Saturday
	日曜日 Sunday
	*/
}