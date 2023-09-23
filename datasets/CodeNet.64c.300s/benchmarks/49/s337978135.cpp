#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a,b;

	while(scanf("%d %d",&a,&b) !=EOF){
	
		int tag = (a+b)/1000000;
		int keta = 7;
		if(tag==0){
			tag = (a+b)/100000;
			keta = 6;
		}
		if(tag==0){
			tag = (a+b)/10000;
			keta = 5;
		}
		if(tag==0){
			tag = (a+b)/1000;
			keta = 4;
		}
		if(tag==0){
			tag = (a+b)/100;
			keta = 3;
		}
		if(tag==0){
			tag = (a+b)/10;
			keta = 2;
		}
		if(tag==0){
			tag = (a+b)/1;
			keta = 1;
		}

		cout << keta << endl;
	}
	
	return 0;
}