#include <iostream>
using namespace std;

int main() {
	int a,b=0;
	while(1){
		cin >> a;
		if(a==0) break;
		a=1000-a;
		if(a>=500){
			a-=500;
			b++;
		}

		while(1){
			if(a<100) break;
			a-=100;
			b++;
		}

		if(a>=50){
			a-=50;
			b++;
		}

		while(1){
			if(a<10) break;
			a-=10;
			b++;
		}

		if(a>=5){
			a-=5;
			b++;
		}

		while(1){
			if(a==0) break;
			a-=1;
			b++;
		}
		cout <<b << endl;
		b=0;
	}
	return 0;
}