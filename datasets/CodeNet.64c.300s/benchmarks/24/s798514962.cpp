#include <iostream>
using namespace std;

int main() {
	int n,a,b,pa,pb;
	while(pa=pb=0,cin>>n,n){
		for(;n;--n){
			cin>>a>>b;
			if(a>b)pa+=(a+b);
			else if(a<b)pb+=(a+b);
			else pa+=a,pb+=b;
		}
		cout<<pa<<" "<<pb<<endl;
	}
	return 0;
}