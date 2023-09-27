#include <iostream>
#include <vector>
#include <algorithm> 
#include <map> 
#include <math.h>
using namespace std;



int main(){
	int e;
	
	cin >> e;
	while(e != 0){
		int minimum = 10000000;
		for(int z = 0; z * z * z <= e; z++){
			for(int y = 0; y * y <= e; y++){
				if(ceil(e - y * y - z * z * z) == floor(e - y * y - z * z * z) && e - y * y - z * z * z >= 0){
					minimum = min(minimum, e - y * y - z * z * z + y + z);
				}
			}
		}
		cout << minimum << endl;
		cin >> e;
	}

	return 0;
}