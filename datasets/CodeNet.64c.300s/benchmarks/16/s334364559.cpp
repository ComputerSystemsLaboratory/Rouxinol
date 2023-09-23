#include <iostream>
using namespace std;

int main(){
	int n,dif;
	cin >> n;
	int* r = new int[n];
	for(int i = 0;i < n; i++){
		cin >> r[i];
	}
	int currentMax = r[1] - r[0];
	int currentMin = r[0];
	for(int i = 1;i < n;i++){
		if(r[i] - currentMin > currentMax)
			currentMax = r[i] - currentMin;
		if(r[i] < currentMin)
			currentMin = r[i];

	}
	
	cout  << currentMax << endl;

	return 0;
}

