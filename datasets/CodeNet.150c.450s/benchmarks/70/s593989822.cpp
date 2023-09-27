#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c;
	while(cin>>a>>b){
		if(a==0)break;
		if(a==1)c=b;
		if(a==2)c=31+b;
		if(a==3)c=60+b;
		if(a==4)c=91+b;
		if(a==5)c=121+b;
		if(a==6)c=152+b;
		if(a==7)c=182+b;
		if(a==8)c=213+b;
		if(a==9)c=244+b;
		if(a==10)c=274+b;
		if(a==11)c=305+b;
		if(a==12)c=335+b;
		if(c%7==1)cout<<"Thursday"<<endl;
		if(c%7==2)cout<<"Friday"<<endl;
		if(c%7==3)cout<<"Saturday"<<endl;
		if(c%7==4)cout<<"Sunday"<<endl;
		if(c%7==5)cout<<"Monday"<<endl;
		if(c%7==6)cout<<"Tuesday"<<endl;
		if(c%7==0)cout<<"Wednesday"<<endl;
	}
    return 0;
    }
