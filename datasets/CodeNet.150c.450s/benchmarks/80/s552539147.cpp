#include<iostream>
using namespace std;

int main(){

	int score[2][4];
	int sum_A=0;
	int sum_B=0;

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 4; j++){
			cin >> score[i][j];
		}
	}

	for (int i = 0; i < 4; i++){
		sum_A += score[0][i];
		sum_B += score[1][i];
	}

	if (sum_A >= sum_B){
		cout << sum_A<<endl;
	}
	else {
		cout << sum_B<<endl;
	}
	//getchar();

	return 0;
}