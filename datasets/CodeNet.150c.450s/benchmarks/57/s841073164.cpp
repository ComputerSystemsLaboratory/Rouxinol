#include <iostream>
using namespace std;
int main() {
	int a, b;
	char op;
	cin>> a >> op >> b;
	while( op != '?'){	
		if( op == '+'){
			cout<< a + b <<endl;
		}else if( op == '-'){
			cout<< a - b <<endl;
		}else if( op == '*'){
			cout<< a * b <<endl;
		}else{
			cout<< a / b <<endl;
		}
		cin>> a >> op >> b;
	}
}
