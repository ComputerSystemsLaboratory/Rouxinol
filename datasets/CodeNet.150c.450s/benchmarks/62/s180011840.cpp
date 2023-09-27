#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=0;i<2;i++){
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(b>c){
		int tmp=b;
		b=c;
		c=tmp;
	}
	if(a>c){
		int tmp=a;
		a=c;
		c=tmp;
	}
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}