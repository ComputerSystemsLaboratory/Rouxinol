
#include<stdio.h>
#include<iostream>
#include <algorithm>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	char n[10000];
	int i=0;
	int m=0;

	while(1){
		i=0;
		m=0;
		cin>>n;


		while(n[i]!='\0'){
			m=m+(n[i]-'0');
			i++;

			if(m==0){
				break;
			}
		}

		if(m==0){
			break;
		}

		cout<<m<<endl;

	}
	return 0;
}