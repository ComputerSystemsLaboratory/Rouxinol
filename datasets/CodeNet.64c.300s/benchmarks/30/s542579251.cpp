#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//?????????
	int num1=0,num2=0,num3=0;
	int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
	int u1=0,u2=0,u3=0,u4=0,u5=0,u6=0;
	
	for(int i=0;i<1000;i++){
	cin>>num1;
	if(num1==0){
		return 0;
	}
	num2=1000-num1;
	p1=num2/500;
	u1=num2%500;
	p2=u1/100;
	u2=u1%100;
	p3=u2/50;
	u3=u2%50;
	p4=u3/10;
	u4=u3%10;
	p5=u4/5;
	u5=u4%5;
	p6=u5/1;
	u6=u5%1;
	num3=p1+p2+p3+p4+p5+p6;
	cout<<num3;
	cout<<"\n";
	}
}