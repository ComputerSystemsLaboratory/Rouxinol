#include<iostream>
using namespace std;

int main(){
	int x, y, tmp;
	while(1){
		cin >> x >> y;
		if(x == 0 && y == 0){
			break;
		}
		if(y < x){
			tmp = x;
			x = y;
			y = tmp;
		}
		
		cout << x << " " << y << endl;
	}
	
	return 0;
} 