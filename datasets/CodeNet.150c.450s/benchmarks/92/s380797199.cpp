#include<iostream>


using namespace std;


int main(){
	int a=0,b=0,c,i;

	while(cin >> a >> b){
		i=1;
		c = a+b;
	
		while(c>=10){
			c = c/10;
			i++;
		}
	cout << i << endl;

	}
}