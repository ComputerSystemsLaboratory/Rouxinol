#include<iostream>
 using namespace std;
 int main(){
 int a=0,b=0,c=0,S;
	cin>>S;
		a=S/3600;
		b=(S-a*3600)/60;
		c=S-a*3600-b*60;
			cout<<a<<":"<<b<<":"<<c<<endl;
return 0;
}