#include <iostream>
#include <stdio.h>
int main(){

	char a[21];
	int i;

	scanf("%s",a);
	for(i=0;a[i]!='\0';i++);
	if(i>0) i--;
	for(;i>=0;i--) std::cout << a[i];
	std::cout<<std::endl;
	
		return 0;
		}