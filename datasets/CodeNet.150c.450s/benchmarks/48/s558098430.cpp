#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int E,X,tempmin;
	int min;

	while(true) {
		cin >> E;
		if(E == 0) {
			break;
		}
		min = 1000000;
		for(int Z = 0; Z*Z*Z<=E; Z++) {
			for(int Y = 0; Y*Y<=(E-Z*Z*Z); Y++) {
				X = E-Y*Y-Z*Z*Z;
				tempmin = X+Y+Z;
				//cout << X << " " << Y << " " << Z << endl;
				//cout << tempmin << endl;
				if((tempmin<min) && (X+Y*Y+Z*Z*Z == E)) {
					min = tempmin;
					
				}
			}
		}
		cout << min << endl;

	}
	return 0;
}