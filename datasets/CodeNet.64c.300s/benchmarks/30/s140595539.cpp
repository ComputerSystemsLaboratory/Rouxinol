#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int pay,num;
	while (cin >> pay)

	{
		num = 0;
		if (!pay) break;

		pay = 1000 - pay;
		if (pay / 500 == 1){
			pay -= 500;
			num++;
		}
		for (;;){
			if (pay / 100 >= 1){
				pay -= 100;
				num++;
			}
			else break;
		}
		for (;;){
			if (pay / 50 >= 1){
				pay -= 50;
				num++;
			}
			else break;
		}
		for (;;){
			if (pay / 10 >= 1){
				pay -= 10;
				num++;
			}
			else break;
		}
		for (;;){
			if (pay >= 5){
				pay -= 5;
				num++;
			}
			else break;
		}
		for (;;){
			if (pay >= 1){
				pay -= 1;
				num++;
			}
			else break;
		}
		cout << num << endl;
	}
}