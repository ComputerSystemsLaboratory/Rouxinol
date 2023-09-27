#include<iostream>
using namespace std;
int main(){
	int m,f,r,x;
	while(1){
	cin>>m>>f>>r;
	if(m==-1 && f==-1 && r==-1){
		break;
	}
	x=m+f;
	if( x<30 || m==-1 || f==-1){
		cout<<"F"<<endl;
	}
	else if(x>=30 && x<50 && m!=-1 && f!=-1 && r<50){
		cout<<"D"<<endl;
	}
	else if(x>=50 && x<65 && m!=-1 && f!=-1 || x>=30 && x<50 && m!=-1 && f!=-1 && r>=50){
		cout<<"C"<<endl;
	}
	else if(x>=65 && x<80 && m!=-1 && f!=-1){
		cout<<"B"<<endl;
	}
	else if(x>=80 && m!=-1 && f!=-1){
		cout<<"A"<<endl;
	}
	}
	return 0;
}