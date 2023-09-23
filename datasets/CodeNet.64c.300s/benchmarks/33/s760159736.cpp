#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

	int a;
	int b;
	int c;
	char op;
	
	while(true){
		
		cin >> a >> op >> b ;
	
		if(op == '+'){
			c=a+b;
		} else if(op == '-'){
			c=a-b;
		} else if(op == '*'){
			c=a*b;
		} else if(op == '/'){
			c=a/b;
		} else if(op == '?'){
			break;
		}
		cout << c <<endl;
	}
}