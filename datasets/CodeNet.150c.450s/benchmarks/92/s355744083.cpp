#include<iostream>
using namespace std;
int main(void){
	int a,b;
	while(cin>>a>>b){
		for(a+=b,b=0;a>0;b++,a/=10);
		cout<<b<<endl;
	}
}