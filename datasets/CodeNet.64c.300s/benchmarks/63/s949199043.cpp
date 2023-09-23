#include <iostream>
using namespace std;

typedef unsigned long long L;
int main(){
	for(L a,b,c,d,e; cin>>a>>b;){
		for(c=a,d=b;;){
			e = c % d;
			c = d;
			d = e;
			if(!e)break;
		}
		cout<<c<<" "<<a*b/c<<endl;
	}
}