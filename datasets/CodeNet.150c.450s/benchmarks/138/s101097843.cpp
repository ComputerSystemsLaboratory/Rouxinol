#include<iostream>
using namespace std;

int max(int x, int y){
	if (x>=y){
		return x;
	}else {
		return y;
	}
}

int min(int x, int y){
	if (x<=y){
		return x;
	}else {
		return y;
	}
}

int gcd(int x,int y){
	int amari=max(x,y)%min(x,y);
	if (amari==0){
		return min(x,y);
	}else {
		return gcd(amari,min(x,y));
	}
}

int main(){
	int x,y,z;
	cin >> x>> y;
	z=gcd(x,y);
	cout << z << endl;
	return 0;
}