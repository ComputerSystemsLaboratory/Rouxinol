#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
	int x,y,z;
	cin>>x>>y>>z;
	int a;
	a=0;
	while(x<=y){
		if(z%x==0){
			a++;
		}
		else{
		}
		x++;
	}
	cout<<a<<endl;
}