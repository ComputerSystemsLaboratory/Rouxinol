#include <iostream>
using namespace std;

int solveZY(int e,int min) {
	int tempmin,X;
	for(int Z = 0; Z*Z*Z<=e; Z++) {
		for(int Y = 0; Y*Y<=(e-Z*Z*Z); Y++) {
			X = e-Y*Y-Z*Z*Z;
			tempmin = X+Y+Z;
			//cout << X << " " << Y << " " << Z << endl;
			//cout << tempmin << endl;
			if((tempmin<min) && (X+Y*Y+Z*Z*Z == e)) {
				min = tempmin;
			}
		}
	}
	return min;
}

int main() {

	int E;
	int min;

	while(true) {
		cin >> E;
		if(E == 0) {
			break;
		}
		min = 1000000;
		min = solveZY(E,min);

		cout << min << endl;

	}
	return 0;
}