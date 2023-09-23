#include<iostream>
using namespace std;
int main() {
	int a,b,c=0,d;
	int yama[10];
	int hyama[3];
	for(a=0;a<10;a++){
		cin >> yama[a];
	}
	for(a=0;;a++){
		if(a == 9){
			a = 0;
			c = 0;
		}
		if(yama[a] < yama[a+1]){
			b = yama[a];
			yama[a] = yama[a+1];
			yama[a+1] = b;
		} 
		else {
			c++;
		}
		if(c == 9) {
			break;
		}
	}
	for(a=0;a<3;a++) {
		cout << yama[a] << endl;
	}
	return 0;
}