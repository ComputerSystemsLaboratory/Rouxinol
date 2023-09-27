#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int number[31] , number2;

	for(int i = 1; i <= 30; i++){
		number[i] = i;
	}
	for(int i = 1; i <= 28; i++){
		cin >> number2;
		for(int j = 1; j <= 30; j++){
			if(number[j] == number2){
				number[j] = 0;
			}
		}
	}

	sort(number+1 , number + 31 , greater<int>());

	cout << number[2] << endl;
	cout << number[1] << endl;
	
	return 0;
}