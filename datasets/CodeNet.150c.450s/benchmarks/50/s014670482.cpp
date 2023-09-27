#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	while(1){
		
		c=0;
		b=1000;
		cin >> a;
		if(a==0) break;
		
		b= b-a;
		
		while(b>=500){
			b -= 500;
			c++;
		}
		while(b>=100){
			b -= 100;
			c++;
		}
		while(b>=50){
			b -= 50;
			c++;
		}
		while(b>=10){
			b -= 10;
			c++;
		}
		while(b>=5){
			b -= 5;
			c++;
		}
		while(b>=1){
			b -= 1;
			c++;
		}
		
		cout << c <<endl;
	}
	
	

	
	return 0;
	
}
	