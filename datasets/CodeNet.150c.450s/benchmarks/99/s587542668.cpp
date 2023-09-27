#include<iostream>
#include<stdio.h>
#include<string>
#include <cctype>
using namespace std;

int change(char);

int change(char str[]){
	int num=0,co=1;
	int i;
	for(i = 0 ; str[i] ; i++){
	if(str[i]=='m') num+=1000*co;
	if(str[i]=='c') num+=100*co;
	if(str[i]=='x') num+=10*co;
	if(str[i]=='i') num+=1*co;
	
	if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'){
		co = str[i]-'0';
	}else{
		co = 1;
	}
	}
	return num;
}
	
int main(){
	int n;
	int sum;
	int i,j;
	char str1[10],str2[10];
	
	cin >> n;
	
	for(i = 0 ; i < n ; i++){
		cin >> str1 >> str2;
		
	sum=change(str1)+change(str2);
		if(sum/1000 > 1){
			cout << sum/1000;
			}
		if(sum/1000){
			printf("m");
			}
		sum %= 1000;
		if(sum/100 > 1){
			cout << sum/100;
			}
		if(sum/100){
			printf("c");
			}
		sum%=100;
		if(sum/10 > 1){
			cout << sum /10;
			}
		if(sum/10){
			printf("x");
			}
		sum%=10;
		if(sum>1){
			cout << sum;
			} 
		if(sum){
			printf("i");
			}
		
		cout << endl;
		
	}
	return 0;
}