#include<iostream>

using namespace std;

int GCD(int x,int y){
	int r;
	if(x<y)swap(x,y);
	while(y>0){
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
int main(){
	int x,y,Z;
	cin >> x >> y;
	Z=GCD(x,y);
	cout << Z << endl;
}
