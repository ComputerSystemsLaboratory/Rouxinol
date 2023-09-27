#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int x=-1, y=-1,z=-1;
	int c=0;
	cin >> x >> y >> z;

	for (int i = x; i <= y; i++){
		if (z%i == 0){ c++; }
	}
	cout << c << endl;
	return 0;
}