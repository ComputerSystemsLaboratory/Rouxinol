#include <climits>
#include <iostream>
using namespace std;

int main(){
	int rowCount;
	int minValue;


	int currentValue = 0;
	int currentDif   = 0;
	int maxDif       = INT_MIN;

	cin >> rowCount;

	if(rowCount < 1){
		return 0;
	}

	cin >> currentValue;
	minValue = currentValue;

	for(int i = 1; i < rowCount; i++){
		cin >> currentValue;
		currentDif = currentValue - minValue;

		if(currentDif > maxDif){
			maxDif = currentDif;
		}
		if(currentValue < minValue){
			minValue = currentValue;
		}
	}
	cout << maxDif << endl;
	return 0;
}