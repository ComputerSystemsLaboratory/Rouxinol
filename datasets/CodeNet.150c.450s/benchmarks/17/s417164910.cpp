#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	cin>>b;
	if(a<b){
		int i=0;
		i=b;
		b=a;
		a=i;
	}
	cin>>c;
	if(a<c){
		int i=0;
		i=c;
		c=a;
		a=i;
	}
	if(b<c){
		int i=0;
		i=c;
		c=b;
		b=i;
	}
	cin>>d;
	if(a<d){
		int i=0;
		i=d;
		d=a;
		a=i;
	}
	if(b<d){
		int i=0;
		i=d;
		d=b;
		b=i;
	}
	if(c<d){
		int i=0;
		i=d;
		d=c;
		c=i;
	}
	cin>>e;
	if(a<e){
		int i=0;
		i=e;
		e=a;
		a=i;
	}
	if(b<e){
		int i=0;
		i=e;
		e=b;
		b=i;
	}
	if(c<e){
		int i=0;
		i=e;
		e=c;
		c=i;
	}
	if(d<e){
		int i=0;
		i=e;
		e=d;
		d=i;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
}