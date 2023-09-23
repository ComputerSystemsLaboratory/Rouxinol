#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,b,c,d;
	

	while(cin>>a){
		b=a%60;
		c=((a-b)/60)%60;
		d=((a-b)/60-c)/60;
		cout<<d<<':'<<c<<':'<<b<<endl;
	
	}
	return 0;
}