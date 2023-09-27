#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int a;
	int b;
	
	cin >> a;
	cin >> b;
	
	if(a > b){
		printf("a > b\n");
	}
	else if(a < b){
		printf("a < b\n");
	}
	else if(a = b){
		printf("a == b\n");
	}
    return 0;
}