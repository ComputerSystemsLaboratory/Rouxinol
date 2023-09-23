#include <iostream>
using namespace std;

int main(){
	int C[6] = {500, 100, 50, 10, 5, 1};	// 0:500円 1:100円 2:50円 3:10円 4:5円 5:1円
	int price;
	int change = 1000;
	int coin = 0;
	
	for(;;){
		change = 1000;
		coin = 0;
		cin >> price;
		if(price == 0)	break;
		change -= price;
	
		for(int i = 0; i < 6; i++){
			coin += change / C[i];
			change %= C[i];
		}
	
		cout << coin << endl;
	}
	return 0;
}