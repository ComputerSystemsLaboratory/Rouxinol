#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if(a < b && b < c){
		printf("Yes\n");
	}
		else{
			printf("No\n");
		}
	

	return 0;
}