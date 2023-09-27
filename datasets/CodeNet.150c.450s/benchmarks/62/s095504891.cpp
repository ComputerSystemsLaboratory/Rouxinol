#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c;
	if (b<a){
		d = a;
		a = b;
		b = d;
	}
	if (c<a)cout << c <<" "<< a <<" "<< b << endl;
	else if (c<b)cout << a <<" "<< c <<" "<< b << endl;
	else cout << a <<" "<< b <<" "<< c << endl;
	return 0;
}	