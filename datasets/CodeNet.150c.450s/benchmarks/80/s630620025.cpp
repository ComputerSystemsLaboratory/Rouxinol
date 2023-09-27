#include<iostream>
using namespace std;
int main(){
	int a,b,i,j,as=0,bs=0;
	for(i=0;i<4;i++){
	cin>>a;
	as+=a;
	}
	for(j=0;j<4;j++){
	cin>>b;
	bs+=b;
	}
	if(as<bs){
	cout<<bs<<endl;
	}
	else if(as>bs){
	cout<<as<<endl;
	}
	else{
	cout<<as<<endl;
	}
return 0;
}