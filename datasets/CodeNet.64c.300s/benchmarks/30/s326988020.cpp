#include<iostream>
using namespace std;
int main()
{
	int cost,change;
	int sum;
	int a,b,c,d,e,f;
	while(cin >>cost){
		if(cost==0) break;
		change=1000-cost;

		a=change%500%100%50%10%5;
		b=(change%500%100%50%10-a)/5;
		c=(change%500%100%50-a-5*b)/10;
		d=(change%500%100-a-5*b)/50;
		e=(change%500-a-5*b-10*c-50*d)/100;
		f=(change-a-5*b-10*c-50*d-100*e)/500;

		sum=a+b+c+d+e+f;
		cout <<sum<< endl;
	}
	return 0;
}