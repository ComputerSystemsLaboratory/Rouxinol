#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int e;
	while(cin >> e && e){
		int min_count = 1000000;
		for(int z = 0; z*z*z <= e; z++){
			for(int y = 0; y*y <= e - z*z*z; y++){
				min_count = min(min_count, z+y+e-y*y-z*z*z);
			}
		}
		cout << min_count << endl;
	}
	return 0;
}