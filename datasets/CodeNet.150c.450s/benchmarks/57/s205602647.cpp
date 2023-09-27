#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char op;
	do{
		cin>>a>>op>>b;
		if (op=='?')
			break;
		switch (op){
			case '+':cout<<a+b<<endl;
				 	break;
			case '-':cout<<a-b<<endl;
					 break;
			case '*':cout<<a*b<<endl;
				 	break;
			case '/':cout<<a/b<<endl;
				 	break;
			default: cout<<"error op"<<endl;
		}
		
	}while(1);
	
	return 0;
}
