#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a;
	b=a/3600;
	c=(a-b*3600)/60;
	d=a-b*3600-c*60;
	cout<<b<<":"<<c<<":"<<d<<endl;
	return 0;
}