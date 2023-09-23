#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,t;
	
	cin >> a >> b >> c;
	
	while(1){
		if(c<=b && b<=a)break;
	if(a>b){
		t = a;
		a = b;
		b = t;
	}else if(b>c){
		t = b;
		b = c;
		c = t;
	}else if(c>a){
		t = c;
		c = a;
		a = t;
		}
	}
	cout << c <<" "<< b << " " << a <<endl;
}