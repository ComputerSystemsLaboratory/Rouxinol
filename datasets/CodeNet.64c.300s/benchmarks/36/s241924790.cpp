#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	int first, second, third;
	cin >> a >> b>> c;
	if(a > b && a > c){
		third = a;
		if(b > c) {second = b; first = c;}
		else { second = c; first=b; }
	}
	else if(b > a && b > c) {
		third = b;
		if(a > c) {second = a; first = c;}
		else { second = c; first = a;}
	}
	else {
		third =c;
		if(a > b) {second =a; first =b;}
		else {second = b; first = a;}
	}
	// your code goes here
	
	cout << first <<" "<<second <<" "<< third << endl;
	return 0;
}