#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;
int main(){
	char c;
	while(1){
		scanf("%c",&c);
		if(isupper(c)){
			c=tolower(c);
		}else{
			c=toupper(c);
		}
		cout<<c;
		if(c=='\n'){break;}
	}
    return 0;
}