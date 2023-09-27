#include <iostream>
using namespace std;
int main(void){
	int a,b=100000,c,d,e=1000;
	cin>>a;
	for (int A=0;A<a;A++){
		c=b*1.05;
		d=c%1000;
		if (d!=0){
			e-=d;
			c+=e;
			b=c;
			e=1000;
		}
		b=c;
	}
	cout<<c<<endl;
	return 0;
}