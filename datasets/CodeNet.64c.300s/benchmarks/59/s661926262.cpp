#include <iostream>
#include <string>
#include <math.h>

using namespace std;


bool isPrimeNumber(int Specimen){
	double DividedSqrt = sqrt(Specimen);
	for (int i = 2; i <= DividedSqrt; ++i){
		if (Specimen % i == 0 && Specimen != 2){
			return false;
		}
	}

	return true;

}

int main(){
	
	int NumberOfInput;
	int InputArray;
	int PrimeNumbersCount = 0;

	cin >> NumberOfInput;

	for (int i = 0; i < NumberOfInput; ++i){		
		cin >> InputArray;
		PrimeNumbersCount += (int)isPrimeNumber(InputArray);
	}

	cout << PrimeNumbersCount<<endl;
	return 0;
}