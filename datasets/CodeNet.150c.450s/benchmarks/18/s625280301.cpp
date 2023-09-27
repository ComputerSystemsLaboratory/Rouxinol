#include<iostream>

using namespace std;

int week(int money){
	money = money + money * 0.05;
	if(money % 1000 != 0){
		money = money + 1000 - ( money % 1000 );
	}
	return money;
}

int main(void){
	int n;
	int money = 100000;
	cin >> n;
	for(int i = 0;i < n;i++){
		money = week(money);
	}

	cout << money << endl;
	
	return 0;
}