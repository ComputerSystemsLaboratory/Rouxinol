#include<iostream>
using namespace std;
int main(){
	int a,b=0,c=0;
	cin>>a;
	while(a>=60){
		a=a-60;
		b=b+1;
	}
	while(b>=60){
		b=b-60;
		c=c+1;
	}
	cout<<c<<":"<<b<<":"<<a<<endl;
}