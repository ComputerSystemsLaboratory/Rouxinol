#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a;
	b=a-(a/60*60);
		
	c=a/60;
		if(c>=60){
		c=c-(a/3600*60);
		} 
		
	d=a/3600;
		
	cout<<d<<":"<<c<<":"<<b<<endl;;
	return 0;
}