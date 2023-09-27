#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//??????
	int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,num10=0;
	cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;
	num9=num1+num2+num3+num4;
	num10=num5+num6+num7+num8;
	if(num9>num10){
		cout<<num9;
		cout<<"\n";
		return 0;
	}
	if(num9<num10){
		cout<<num10;
		cout<<"\n";
		return 0;
	}
	if(num9==num10){
		cout<<num9;
		cout<<"\n";
		return 0;
	}
}