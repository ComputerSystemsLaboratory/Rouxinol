#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int pay,remain,ans=0;

	while(1){
		cin>>pay;
		if(pay==0){
			break;
		}
		remain=1000-pay;
		ans=0;
		while(remain>=500){
			remain-=500;
			ans++;
		}
		while(remain>=100){
			remain-=100;
			ans++;
		}
		while(remain>=50){
			remain-=50;
			ans++;
		}
		while(remain>=10){
			remain-=10;
			ans++;
		}
		while(remain>=5){
			remain-=5;
			ans++;
		}
		while(remain>=1){
			remain-=1;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}