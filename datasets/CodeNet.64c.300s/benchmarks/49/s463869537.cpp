#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int a,b,i,keta,waru;
	while(cin>>a>>b){
		keta=0;
		waru=1;
		while(1){
			if((a+b)/waru*10!=0){
				keta++;
				waru=waru*10;
				}
			else break;
			}
		cout<<keta<<endl;
		}
	return 0;
}