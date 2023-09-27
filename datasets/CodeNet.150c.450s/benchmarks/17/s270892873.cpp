#include <iostream>

using namespace std;

int main(void){
	int input[5];
	for(int i=0;i<5;i++){
		cin >> input[i];
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(input[i]>input[j]){
			int tmp = input[i];
			input[i] = input[j];
			input[j] = tmp;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout << input[i] << " ";
	}
	cout << input[4] << endl;
	return 0;
}