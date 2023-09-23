#include <iostream>
using namespace std;

int S(int a,int b){
	return a*b;
}
int N(int x,int y){
	return 2*x+2*y;
}
int main() {
	int c,d,e,f;
	cin >> c >> d;
	
	e=S(c,d);
	f=N(c,d);
	
	cout << e  << " " << f << endl;
	
	return 0;
}