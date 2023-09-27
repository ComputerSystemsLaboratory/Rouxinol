#include<iostream>
#include<stdio.h>
int main(){
	int i;
	char s[20];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
	if(i>0) i--;
	for(;i>=0;i--) std::cout << s[i];
	std::cout<<std::endl;

	
    return 0;
}