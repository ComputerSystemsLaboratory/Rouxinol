#include<iostream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
using namespace std; 
int main(){
	char s[202];
	char p[101];
	char x[101];
	cin>>s>>p;
	strcpy(x,s);
	strcat(s,x);
	//cout<<"www"<<endl;
	if(strstr(s,p)!=NULL){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}