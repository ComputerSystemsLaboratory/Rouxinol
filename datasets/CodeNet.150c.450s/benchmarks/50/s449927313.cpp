#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13;
	int sum;

	for(int i=0;i<150;i++){
	cin>>num1;
	if(num1==0){
		return 0;
	}
	num2=1000-num1;
	num3=num2/500;
	num4=num2%500;
	num5=num4/100;
	num6=num4%100;
	num7=num6/50;
	num8=num6%50;
	num9=num8/10;
	num10=num8%10;
	num11=num10/5;
	num12=num10%5;
	num13=num12/1;
	sum=num3+num5+num7+num9+num11+num13;
	cout<<sum;
	cout<<"\n";
	}
	return 0;
}