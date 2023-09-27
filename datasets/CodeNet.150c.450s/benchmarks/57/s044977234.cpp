#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	char op;
	int res;
	
	while (1){
		cin >> a >> op >> b;
	
		if (op == '?'){
			break;
		}
		if (op == '+'){
			res = a + b;
		}
		else if (op == '-'){
			res = a - b;
		}
		else if (op == '*'){
			res = a * b;
		}
		else if (op == '/'){
			res = a / b;
		}
		
		cout << res << endl;
	}
	
	return (0);
}