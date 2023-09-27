#include<iostream>
using namespace std;

int main(){

	int a, b, c;

	while(cin >> a >> b)
	{
		if(a+b<10){
			c=1;
		}

		else if(a+b<100){
			c=2;
		}

		else if(a+b<1000){
			c=3;
		}

		else if(a+b<10000){
			c=4;
		}

		else if(a+b<100000){
			c=5;
		}

		else if(a+b<1000000){
			c=6;
		}

		else{
			c=7;
		}

		cout<<c<<endl;
		
	}

	return 0;
}