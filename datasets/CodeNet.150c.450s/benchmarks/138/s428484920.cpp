#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	while(true){
		if(x > y){
			x = x - y;
		}
		else if(x < y){
			y = y - x;
		}
		else if(x == y){
			break;
		}
	}
	cout << x << endl;
	return 0;
}