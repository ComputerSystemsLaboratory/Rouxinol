#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;	   do{
	cin >>a>>c>>b;
	if(c=='?') break;
	if(c=='+')cout <<a+b<<endl;
	if(c=='-')cout <<a-b<<endl;
	if(c=='*')cout <<a*b<<endl;
	if(c=='/')cout <<a/b<<endl;
	}while(true);
	return 0;
}