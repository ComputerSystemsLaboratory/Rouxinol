#include<iostream>
using namespace std;

int main(){
	int m,f,r;
	for(;;){
		cin>>m>>f>>r;
		int sum=m+f;
		if(m==-1&&f==-1&&r==-1) break;
		if(m==-1||f==-1) cout<<"F";
		if(sum>=80) cout<<"A";
		if(sum>=65&&sum<80) cout<<"B";
		if(sum>=50&&sum<65) cout<<"C";
		if(sum>=30&&sum<50){
			if(r>=50) cout<<"C";
			if(r<50&&m!=-1&&f!=-1) cout<<"D";
		}
		if(sum<30) cout<<"F";
		cout<<endl;		
	}
	return 0;
}