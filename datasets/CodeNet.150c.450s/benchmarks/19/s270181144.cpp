#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int x=-1, y=-1,tmp;
	while (1){
		cin >> x;
		cin >> y;
		if (x == 0 && y == 0){ break; }
		if (x <= y){
			tmp = y;
			y = x;
			x = tmp;
		}
		cout << y << " " << x << endl; 
	}

	
	return 0;
}