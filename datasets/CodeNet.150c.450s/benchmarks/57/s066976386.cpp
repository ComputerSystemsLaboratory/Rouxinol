#include <iostream>
using namespace std;

int main(){
	int a,b;
	char op;
	while(1){
		cin >> a >> op >> b;
		if(op == '?')break;
		switch(op){
			case '+':
				a +=b;
				cout << a <<"\n";
				break;
			case '-':
				a -=b;
				cout << a <<"\n";
				break;
			case '/':
				a /=b;
				cout << a <<"\n";
				break;
			case '*':
				a *=b;
				cout << a <<"\n";
				break;
		}
	}
	return 0;
	

}