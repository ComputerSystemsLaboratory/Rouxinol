#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f,g,h;
	int sum=0;
	while(cin>>a){
		if(a==0)break;
		b=1000-a;
		c=b/500;
		d=(b-500*c)/100;
		e=(b-500*c-100*d)/50;
		f=(b-500*c-100*d-50*e)/10;
		g=(b-500*c-100*d-50*e-10*f)/5;
		h=b-500*c-100*d-50*e-10*f-5*g;
		cout<<c+d+e+f+g+h<<endl;
	}
	return 0;
}