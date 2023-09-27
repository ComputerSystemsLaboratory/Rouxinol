#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a,b,c,i;
	while(scanf("%d %d",&a,&b) != EOF){
		c = a + b;
		for(i = 0; c != 0; i++){
			c /= 10;
		}
		cout << i << endl;
	}
	return 0;
}