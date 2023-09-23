#include <iostream>
#
using namespace std;
int main(void){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	else{
	}
	if(b>c){
		int t=b;
		b=c;
		c=t;
	}
	else{
	}
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	else{
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
}