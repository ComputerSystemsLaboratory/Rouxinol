#include<iostream>
using namespace std;

int main(){
	long long e;
	while ((cin >> e), e){
		long long  x,y, z, min = 1000000;
		for (z = 0; z*z*z <= e; z++){
			for (y = 0; y*y <= e; y++){
				x = e - z*z*z - y*y;
				if (x >= 0 && min > x + y + z)min = x + y + z;
			}
		}
		cout << min << endl;
	}
}