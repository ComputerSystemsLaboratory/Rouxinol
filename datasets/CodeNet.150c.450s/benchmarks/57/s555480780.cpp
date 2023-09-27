#include<iostream>
using namespace std;
static const int a = 20000;
static const int b = 20000;

int main(){
	int a,b,c;
	char op;
	
	while(1){
		cin >> a;
		cin >> op;
		cin >> b;
		if(op == '+'){
			c=a+b;
			cout<<c<<endl;
		}
		if(op == '-'){
			c=a-b;
			cout<<c<<endl;
		}
		if(op == '*'){
			c=a*b;
			cout<<c<<endl;
		}
		if(op == '/'){
			c=a/b;
			cout<<c<<endl;
		}
		if(op == '?') break;
	}
	return 0;
}