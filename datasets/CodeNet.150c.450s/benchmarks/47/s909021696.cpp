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
*/
	int W;
	int H;
	int x;
	int y;
	int r;
	int f1;
	int f2;
	int f3;
	int f4;
	cin>>W>>H>>x>>y>>r;

	bool t = false;

	if (x-r>=0){
		if(t) cout<<"1Yes"<<endl;
		f1=1;
	}else if (x-r<0){
		if(t) cout<<"1No"<<endl;
		f1=0;
	}
	if (y+r<=H){
		if(t) cout<<"2Yes"<<endl;
		f2=1;
	}else if (y+r>H){
		if(t) cout<<"2No"<<endl;
		f2=0;
	}
	if (x+r<=W){
		if(t) cout<<"3Yes"<<endl;
		f3=1;
	}else if (x+r>W){
		if(t) cout<<"3No"<<endl;
		f3=0;
	}
	if (y-r>=0){
		if(t) cout<<"4Yes"<<endl;
		f4=1;
	}else if (y-r<0){
		if(t) cout<<"4No"<<endl;
		f4=0;
	}
	if (f1==1&&f2==1&&f3==1&&f3==1&&f4==1){
		cout<<"Yes"<<endl;
	}else {
		cout<<"No"<<endl;
	}




	return 0;
}