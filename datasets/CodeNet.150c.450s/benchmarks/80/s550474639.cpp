#include <iostream>
using namespace std;
int a,b,t;
int j;
int main(){
	a=0,b=0;
	for(j=0;j<4;j++){
		cin>>t;
		a+=t;
	}
	for(j=0;j<4;j++){
		cin>>t;
		b+=t;
	}
	if(a>b){
		cout<<a<<endl;
	}else{
		cout<<b<<endl;
	}
	return 0;
}