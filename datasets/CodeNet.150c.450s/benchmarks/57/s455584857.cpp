#include<iostream>
using namespace std;

int main(){
	int a, b, x;
	bool end=false;
	char op;
	while(1){
		cin>>a>>op>>b;
		switch(op){
			case '+':
				x=a+b;
				break;
			case '-':
				x=a-b;
				break;
			case '*':
				x=a*b;
				break;
			case '/':
				x=a/b;
				break;
			case '?':
				end=true;
				break;
		}
		if(end) break;
		cout<<x<<endl;
	}
	return 0;
}