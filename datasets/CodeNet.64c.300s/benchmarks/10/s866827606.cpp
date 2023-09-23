#include<iostream>
using namespace std;

int main(){
	int x,y,o;
	cin >> x >> y;
	while (x != 0 || y != 0){
		if (x>y){
			o=x;
			x=y;
			y=o;
		}
		cout << x << " " << y << endl;
		cin >> x >> y;
	}
}