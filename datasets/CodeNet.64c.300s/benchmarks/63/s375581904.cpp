#include <iostream>
using namespace std;

int gcd(int a,int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}
int lcm (int a,int b){
	return ((a / gcd(a,b)) * b);
}
int main(){
	int x,y;
	while(cin >> x >> y){
		cout << gcd(x,y) << " " << lcm(x,y) << endl;
	}
	return 0;
}