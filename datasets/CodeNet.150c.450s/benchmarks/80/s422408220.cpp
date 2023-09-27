#include<iostream>
using namespace std;
int main(){
	int x,y,a,b,c,d;
	cin>>a>>b>>c>>d;
	x=a+b+c+d;
	cin>>a>>b>>c>>d;
	y=a+b+c+d;
	if(x>y)
	cout<<x<<endl;
	else
	cout<<y<<endl;
	return 0;
}