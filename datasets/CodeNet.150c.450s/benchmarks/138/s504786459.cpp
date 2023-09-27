#include<iostream>
using namespace std;

int gcd(int x,int y){
	int b = x%y;
	if(b != 0)
		return gcd(y,b);
	return y;
}

int main(){
	int x,y;
	cin >> x >> y;
	if(x<y){
		int temp = x;
		x = y;
		y = temp;
	}
	cout << gcd(x,y) << endl;
	return 0;
}