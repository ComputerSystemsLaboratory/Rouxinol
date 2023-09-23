#include <iostream>
using namespace std;

int main() {
	/*
cout<<"Hello World"<<endl;

	int x;
	cin>> x;
	cout<< x*x*x <<endl;

int a;
int b;
cin>>a>>b;
cout<<a*b<<" "<<2*a+2*b<<endl;

	int a;
	int b;
	cin>>a>>b;
	if (a<b){
		cout<< "a < b" <<endl;
	}else if(a>b){
		cout<<"a > b" <<endl;
	}else if(a==b){
		cout<<"a == b"<<endl;
	}else{

	}
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	if (a<b&&b<c){
		cout<<"Yes"<<endl;
	}else {
		cout<<"No"<<endl;
	}
*/
	int a;
	int b;
	int c;
	int d;
	cin>>a>>b>>c;
	if(a>b){
	d=b;
	b=a;
	a=d;
	}
	if(b>c){
	d=c;
	c=b;
	b=d;
	}
	if(a>b){
	d=b;
	b=a;
	a=d;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;











	return 0;
}