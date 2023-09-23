#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,f,g;
    while(1){
	cin>>a;
    if(a==0)
        break;
	b=(1000-a)/500;
	c=(1000-(a+500*b))/100;
	d=(1000-(a+500*b+100*c))/50;
	e=(1000-(a+500*b+100*c+50*d))/10;
	f=(1000-(a+500*b+100*c+50*d+10*e))/5;
	g=(1000-(a+500*b+100*c+50*d+10*e+5*f))/1;
        cout<<b+c+d+e+f+g<<endl;}
	return 0;
}