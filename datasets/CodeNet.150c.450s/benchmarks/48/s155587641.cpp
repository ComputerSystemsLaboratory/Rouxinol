#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int e;
	while(cin >> e && e > 0){
	    int min = 1000000;
		for (int y = 0; y <= 1000; y++){
			for (int z = 0; z <= 100; z++){
				int x = e - z*z*z - y*y;
				if ((x + y + z < min) && (x >= 0)){
					min = x + y + z;
				}

			}
		}
		cout << min << endl;
	}
}