#include <iostream>
using namespace std;

int number[5];

void bubble(){
	for(int i = 0; i < 4; i++){
		for(int j = i + 1; j < 5; j++){
			if(number[i] < number[j])	swap(number[i], number[j]);
		}
	}
}

int main(void){
	for(int i = 0; i < 5; i++){
		cin >> number[i];
	}
	bubble();
	for(int i = 0; i < 5; i++){
		cout << number[i];
		if(i != 4)	cout << " ";
	}
	cout << endl;
  return 0;
}