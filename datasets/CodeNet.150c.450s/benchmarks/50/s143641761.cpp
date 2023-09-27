#include<iostream>
using namespace std;
int p;
int main(){
	while(true){
		cin>>p;if(p==0)break;
		p=1000-p;
		int a1=p/500;p-=500*a1;
		int a2=p/100;p-=100*a2;
		int a3=p/50;p-=50*a3;
		int a4=p/10;p-=10*a4;
		int a5=p/5;p-=5*a5;
		int a6=p/1;p-=1*a6;
		cout<<a1+a2+a3+a4+a5+a6<<endl;
	}
	return 0;
}