#include <iostream>

using namespace std;

int main(){
	int a, b, ans;
	char op;
	while(true){
		cin >> a >> op >> b;
		if(op == '?')
			break;
		if(op == '+'){
			ans = a + b;
		}else if(op == '-'){
			ans = a - b;
		}else if(op == '*'){
			ans = a * b;
		}else if(op == '/'){
			ans = a / b;
		}
		cin.clear();
		cin.ignore();
		cout << ans << endl;
	}
}