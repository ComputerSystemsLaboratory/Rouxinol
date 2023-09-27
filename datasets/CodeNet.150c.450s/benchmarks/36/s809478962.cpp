#include <iostream>

using namespace std;

int main(){
	int d,x,size;
	while(cin>>d){
		x=d;
		size=0;
		while(x<600){
			size=size+(x*x*d);
			x=x+d;
		}
		cout<<size<<endl;
	}
}