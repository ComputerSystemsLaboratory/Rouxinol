#include <iostream>

using namespace std;

int main(){
	int now_money = 100000;
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		now_money += now_money * 5 / 100;
		if(now_money % 1000 != 0){
			now_money -= now_money % 1000;
			now_money += 1000;
		}
	}
	cout << now_money << endl;
	return 0;
}