#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int stair(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 4;
	else 
		return stair(n-1)+stair(n-2)+stair(n-3);
}

int main(){
	int n;
	while(scanf("%d",&n) && n!=0){
		int year = stair(n)/3650;
		if(stair(n)%3650!=0)  year++;
		cout<<year<<endl;
	}

	return 0;
}