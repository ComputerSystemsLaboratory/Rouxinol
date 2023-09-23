#include<iostream>
using namespace std;

int main(){
	int a , b , c , tmp;
	cin >> a >> b >> c ;
	if(b < a){ 
		tmp = a;
		a = b;
		b = tmp;
	}
	if(c < a){
		tmp = b;
		b = a;
		a = c;
		c = tmp;
	}else if(c < b){
		tmp = b;
		b = c;
		c = tmp;
	}
	
	cout << a << " " << b << " " << c << endl;
	
	return 0;
} 