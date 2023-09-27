#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int e,m;
	while(cin >> e,e){
		m = 1000000;
		for(int z = 0;pow(z,3) <= e;z++){
			int y = sqrt(e - pow(z,3));
			int x = e - pow(y,2) - pow(z,3);
			m = min(m,x + y + z);
			//cout << x << ":" << y << ":" << z << " " << (x+y+z) << endl;
		}
		cout << m << endl;
	}
	return 0;
}