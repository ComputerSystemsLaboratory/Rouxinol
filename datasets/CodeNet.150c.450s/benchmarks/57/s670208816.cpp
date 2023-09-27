#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a, b;
	char op[1];
	bool end = false;
	
	for(;;){
		cin >> a >> op[0] >> b;
	
		switch(op[0]){
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		case '?':
			end = true;
			break;
		}
		if(end == true) break;
	}
	return 0;
}