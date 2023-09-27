#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int h;
	cin>>a>>b>>c;
	
	if(a>b){
		h=a;
		a=b;
		b=h;
	}
	if(b>c){
		h=b;
		b=c;
		c=h;
	}
	if(a>c){
		h=a;
		a=c;
		c=h;
		
	}
	if(a>b){
		h=a;
		a=b;
		b=h;
	}
	
	
	
	cout<<a<<' '<<b<<' '<<c<<endl;
	
}
