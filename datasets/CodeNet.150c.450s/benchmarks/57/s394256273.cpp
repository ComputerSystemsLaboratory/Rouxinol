#include<iostream>
#include<string>
using namespace std;

int main(){
	int a, b, ans;
	string op;

	for (;;){
		cin >> a;
		cin >> op;
		cin >> b;
		if (op == "+"){
			ans = a + b;
		}
		else if (op == "-"){
			ans = a - b;
		}
		else if (op == "*"){
			ans = a * b;
		}
		else if (op == "/"){
			ans = a / b;
		}
		else if (op == "?"){
			break;
		}
		cout << ans << endl;
	}
}
