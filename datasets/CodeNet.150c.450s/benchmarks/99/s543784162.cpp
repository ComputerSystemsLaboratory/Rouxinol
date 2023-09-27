#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main(){
int n;cin >> n;
for(int t = 1;t<=n;t++)

{
	char mcxi[10];
	for(int j = 0;j <=9;j++)mcxi[j]='\0';
	cin >> mcxi;
	int num1 = 0,num2 = 0,prenum = 1;
	int i = 0;
	while(mcxi[i]!='\0'){
		switch(mcxi[i]){
			case 'm':num1+=prenum * 1000;
			prenum = 1;
			break;
			case 'c':num1+=prenum * 100;
			prenum = 1;
			break;
			case 'x':num1+=prenum * 10;
			prenum = 1;
			break;
			case 'i':num1+=prenum;
			prenum = 1;
			break;
			default:prenum = mcxi[i]-'0';
		}
		i++;
	}
	for(int j = 0;j <=9;j++)mcxi[j]='\0';
	cin >> mcxi;
	i = 0;prenum = 1;
	while(mcxi[i]!='\0'){
		switch(mcxi[i]){
			case 'm':num2+=prenum * 1000;
			prenum = 1;
			break;
			case 'c':num2+=prenum * 100;
			prenum = 1;
			break;
			case 'x':num2+=prenum * 10;
			prenum = 1;
			break;
			case 'i':num2+=prenum;
			prenum = 1;
			break;
			default:prenum = mcxi[i]-'0';
		}
		i++;
	}
	char ans[10];
	for(int j = 1;j<=9;j++)ans[j]='\0';
	int k = 0;
	switch((num1+num2)/1000){
		case 1:ans[0]='m'; k++; break;
		case 0:break;
		default:ans[0]=(num1+num2)/1000+'0';ans[1]='m';k+=2; break;
		}
	switch(((num1+num2)/100)%10){
		case 1:ans[k]='c';k++;break;
		case 0:break;
		default:ans[k]=((num1+num2)/100)%10+'0';ans[k+1]='c';k+=2; break;
	}
	switch(((num1+num2)/10)%10){
		case 1:ans[k]='x';k++;break;
		case 0:break;
		default:ans[k]=((num1+num2)/10)%10+'0';ans[k+1]='x';k+=2; break;
	}	
	switch((num1+num2)%10){
		case 1:ans[k]='i';break;
		case 0:ans[k]='\0';break;
		default:ans[k]=(num1+num2)%10+'0';ans[k+1]='i';k+=2; break;
	}
	printf("%s\n",ans);
	
	
	}

	return 0;
}