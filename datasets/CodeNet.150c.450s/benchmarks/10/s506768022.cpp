#include <iostream>
#include <array>
using namespace std;

int main(){
	int n;
	cin >> n;
	array<array<array<int ,4>,3>,10> data;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				data[k][j][i] = 0;
			}
		}
	}
	int num1,num2,num3,num4;
	for(int x = 0; x < n; x++){
		cin >> num1 >> num2 >> num3 >> num4;
		data[num3-1][num2-1][num1-1] += num4;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				cout << " " << data[k][j][i];
			}
			cout << endl;
		}
		if(i != 3) cout << "####################" << endl;
	}
	return 0;
}