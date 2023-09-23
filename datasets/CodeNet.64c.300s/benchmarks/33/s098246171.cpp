#include<iostream>
using namespace std;

int main(){
	
	int a,b,t;
	char c;
	
	while(1){
		cin>>a>>c>>b;

		if(c=='+')t=a+b;
		else if(c=='-')t=a-b;
		else if(c=='*')t=a*b;
		else if(c=='/')t=a/b;
		else if(c=='?')break;//????????????????¨????

		cout<<t<<"\n";
		
			}
	
	return 0;
	
	}