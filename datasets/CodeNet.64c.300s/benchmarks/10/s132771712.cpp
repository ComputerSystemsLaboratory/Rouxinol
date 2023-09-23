#include <iostream>
using namespace std;

int main(){
	int x, y;
	int buff;
	while(true){
		cin >> x >> y;
		if(x == 0 && y == 0){
			break;
		}
		else if(x >= y){
			buff = x;
			x = y;
			y = buff;
		}
		cout << x << " " << y << endl;
	}
}