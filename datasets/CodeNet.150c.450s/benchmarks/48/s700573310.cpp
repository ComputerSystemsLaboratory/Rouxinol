#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int e;
	cin >> e;
	while(e!=0){
		int Min = 1000000;
		for(int i=0; i<e+1; i++){
			int z = i;
			if(z*z*z > e){
				break;
			}
			int y = 0;
			int x = 0;
			while( (y+1)*(y+1) <= e-z*z*z ){
				y++;
			}
			x = e-z*z*z-y*y;
			if(Min > x+y+z){
				Min = x+y+z;
			}
		}
		cout << Min << endl;
		cin >> e;
	}
}