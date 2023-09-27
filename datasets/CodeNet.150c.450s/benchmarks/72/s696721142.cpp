#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char x[1201];
	char a;
	int j=0;
	while(1){
		a=getchar();
		if(a!=32&&a<32||a>125)break;
		else{
			if(a>=65&&a<=90){
				x[j]=a+32;
			}
			else if(a>=97&&a<=122){
				x[j]=a-32;
			}
			else{
				x[j]=a;
			}
			j++;
		}
	}
	for(int i=0;i<=j-1;i++){
		cout<<x[i];
	}
	cout<<endl;
}