//ITP_1_2_C
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,s;
	cin>>a>>b>>c;
	
	if(a>=b){
		s = b;
		b = a;
		a = s;
	}
	if(b>=c){
		s = c;
		c = b;
		b = s;
	}
	if(a>=b){
		s = a;
		a = b;
		b = s;
	}
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	return 0;
}