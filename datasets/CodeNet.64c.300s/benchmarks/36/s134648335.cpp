#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a, b, c, x;
	
	cin >> a >> b >> c;
	if(a > b){
		x = a;
		a = b;
		b = x;
	}
	if(a > c){
		x = a;
		a = c;
		c = x;
	}
	if(b > c){
		x = b;
		b = c;
		c = x;
	}
	
	printf("%d %d %d\n", a, b, c);
	
	return 0;
}