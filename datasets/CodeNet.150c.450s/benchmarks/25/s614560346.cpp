#include<iostream>
#include<stdio.h>
using namespace std; 
int main(){
	int x[140]={0};
	char a;
	while(1){
		a=getchar();
		if(a==EOF)break;
		if(a<97)x[a+32]++;
		else x[a]++;
	}
	for(int i=97;i<123;i++){
		cout<<(char)i<<" : "<<x[i]<<endl;
	}
}