#include<iostream>

using namespace std;

int main(){
	int num, num2;
	char a;
	bool flag = 0;

	while(1){
		cin >> num >> a >> num2;
		switch (a){
		case '+':
			cout << num + num2 << endl;
			break;
		case '-':
			cout << num - num2 << endl;
			break;
		case '*':
			cout << num * num2 << endl;
			break;
		case '/':
			cout << num / num2 << endl;
			break;
		case '?':
			flag = 1;
			break;
		default:
			break;
		}
		if(flag == 1) break;
	}
	return 0;
}