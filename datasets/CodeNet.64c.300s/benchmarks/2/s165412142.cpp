#include<iostream>
using namespace std;

int ans(int a,int b,int c){
	if(a+b<30||a==-1||b==-1){
		cout<<"F"<<endl;
	}
	else if(a+b>=80){
		cout<<"A"<<endl;
	}
	else if(a+b>=65){
		cout<<"B"<<endl;
	}
	else if(a+b>=50||c>=50){
		cout<<"C"<<endl;
	}
	else if(a+b>=30){
		cout<<"D"<<endl;
	}
	return 0;
}

int main(){
	while(1){
		int m,f,r;
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1)break;
		ans(m,f,r);
	}
	return 0;
}