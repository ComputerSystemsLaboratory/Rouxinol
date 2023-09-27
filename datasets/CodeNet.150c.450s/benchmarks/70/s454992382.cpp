#include<iostream>
#include<string>

int day(int m, int d){
	if(m==1)return d;
	if(m==2)return 31+d;
	if(m==3)return 60+d;
	if(m==4)return 91+d;
	if(m==5)return 121+d;
	if(m==6)return 152+d;
	if(m==7)return 182+d;
	if(m==8)return 213+d;
	if(m==9)return 244+d;
	if(m==10)return 274+d;
	if(m==11)return 305+d;
	if(m==12)return 335+d;
}

int main(){
	while(1){
		int m,d;
		std::cin>>m>>d;
		if(m==0)return 0;
		std::string s;
		if(day(m,d)%7==1)s="Thursday";
		if(day(m,d)%7==2)s="Friday";
		if(day(m,d)%7==3)s="Saturday";
		if(day(m,d)%7==4)s="Sunday";
		if(day(m,d)%7==5)s="Monday";
		if(day(m,d)%7==6)s="Tuesday";
		if(day(m,d)%7==0)s="Wednesday";
		std::cout<<s<<std::endl;
	}
}