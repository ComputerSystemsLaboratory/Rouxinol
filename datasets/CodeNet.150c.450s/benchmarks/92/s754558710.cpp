#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		a+=b;
		int c;
		for( c=0;a>=1;c++){
			a/=10;
		}
		cout<<c<<endl;
	}
	return 0;
}