#include<iostream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<string>
using namespace std; 
int main(){
	string s;
	char p[101];
	char x[101];
	int c=0;
	cin>>p;
	while(1){
		cin>>s;
		if(s=="END_OF_TEXT")break;
		for(int i=0;i<s.length();i++){
			if(s[i]<97)s[i]=(char)(s[i]+32);
		}
		if(s==p)c++;
	}
	cout<<c<<endl;
}