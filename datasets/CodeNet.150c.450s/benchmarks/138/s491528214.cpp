#include <iostream>
using namespace std;

unsigned int gcd( unsigned int a ,unsigned int b){
	if(b==0) return a;
	return gcd(b , a%b); 
}

int main(){
	unsigned int x , y;
	cin >> x >> y;
	cout << gcd(x , y) << endl;
	return 0;
}