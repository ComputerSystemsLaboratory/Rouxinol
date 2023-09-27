#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;


int main(){
	
	int NumberOfInput;
	int InputArray[2];
	int Remainder;

	for (int i = 0; i < 2; ++i){		
		cin >> InputArray[i];
	}
	
	while (InputArray[0] != InputArray[1]){
		if (InputArray[0] < InputArray[1]){
			InputArray[1] = InputArray[1] - InputArray[0];
		}
		else{
			InputArray[0] = InputArray[0] - InputArray[1];
		}
	}

	cout << InputArray[0]<<endl;

	return 0;
}