#include<iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin>>a;
	b=a/60;//????????\?????????
	c=a%60;//?§?
	d=b/60;//??????
	e=b%60;//???
	cout<<d<<":"<<e<<":"<<c<<endl;
	return 0;

}