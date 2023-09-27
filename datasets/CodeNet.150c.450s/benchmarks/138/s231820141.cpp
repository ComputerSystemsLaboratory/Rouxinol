#include <iostream>
using namespace std;

int gcd(int x,int y){
	int t;
	while(1){
		if(x%y==0){
			t=y;
			break;
		}
		t=x;
		x=y;
		y=t%y;
	}
	return t;
}
int main(){
	int a,b,d;
	cin>>a>>b;
	d=a;
	if(a<b){
		a=b;
		b=d;
	}
	d=gcd(a,b);
	cout<<d<<endl;
	return 0;
}