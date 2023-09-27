#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;

	cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;
	num9=num1+num2+num3+num4;
	num10=num5+num6+num7+num8;
	if(num9>=num10){
		cout<<num9;
	}
	if(num9<num10){
		cout<<num10;
	}
	cout<<"\n";
	return 0;
}