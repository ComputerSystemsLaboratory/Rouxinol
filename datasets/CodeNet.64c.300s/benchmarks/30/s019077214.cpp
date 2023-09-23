#include<iostream>
using namespace std;

int main(){
	int money=1000,m;
	for(int m;cin>>m;money=1000){
		if(m==0)break;
		money-=m;
		int count;
		for(count=0;money;){
			//cout<<"money:"<<money<<endl;
			if(money/500){
				money-=500;
			}
			else if(money/100){
				money-=100;
			}
			else if(money/50){
				money-=50;
			}
			else if(money/10){
				money-=10;
			}
			else if(money/5){
				money-=5;
			}
			else if(money/1){
				money-=1;
			}
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}