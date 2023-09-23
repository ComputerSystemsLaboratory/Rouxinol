#include <iostream>
using namespace std;

int main() {
	int a,b,c,t,i,j;
	cin>>a>>b>>c;
	for(i=3;i>0;i--){
		for(j=i;j>0;j--){
			if(a>b){
				t=a;
				a=b;
				b=t;
			}
			if(b>c){
				t=b;
				b=c;
				c=t;
			}
		}
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
}