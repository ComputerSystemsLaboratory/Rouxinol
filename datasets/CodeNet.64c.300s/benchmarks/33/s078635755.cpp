#include <iostream>
#include <algorithm>

int main(void)
{
	using namespace std;
	int a,b;
	char op;
	int answer;
	bool flg_break = false;

	while(1){
		cin >> a;
		cin >> op;
		cin >> b;

		switch(op){
			case '+':
				answer = a + b;
				break;

			case '-':
				answer = a - b;
				break;

			case '*':
				answer = a * b;
				break;

			case '/':
				answer = a / b;
				break;

			case '?':
				flg_break = true;
				break;
		}

		if(flg_break) break;

		cout << answer << endl;
	}

	return 0;

}