#include<string>
#include<iostream>

using namespace std;

int main()
{
	int a,b;
	char op;
	
	int i,j=0;
	while(1){
		cin >> a >> op >> b;
		if(op =='?') break;
		if(op =='+') cout << a+b << endl;
		else if(op =='-') cout << a-b << endl;
		else if(op =='*') cout << a*b << endl;
		else if(op =='/') cout << a/b <<endl;	
	}
	return 0;
}