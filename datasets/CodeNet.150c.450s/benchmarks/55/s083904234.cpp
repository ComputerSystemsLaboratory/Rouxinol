#include<iostream>
#include<string>
#include<cstdio>
#include<stdio.h>
using namespace std;
int main(){
	int sum=0;
	string str;
	while(1){
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			str[i]-='0';
				sum+=str[i];
		}
		if(str[0]==0)break;
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}