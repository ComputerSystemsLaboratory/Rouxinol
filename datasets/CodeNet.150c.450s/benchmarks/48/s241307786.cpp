#include <iostream>

using namespace std;

int main() {
	int e,small ;
	while(cin >> e && e>0){
		small = e;
		for(int z = 0;  z*z*z <= e; z++){
			for(int y = 0; y*y+z*z*z <= e; y++){
				int x = e-y*y-(z*z)*z;
				small=min(small, x+y+z);
			}
		}
	cout << small << endl ;
	}
return 0;
}