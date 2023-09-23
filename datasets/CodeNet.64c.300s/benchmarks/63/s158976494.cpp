#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long  a,b,ta,tb;
	
	while(cin>>a>>b){
	ta=a;tb=b;
	if(a<b)swap(a,b);
	while(1){
		long long  tmp=b;
		b=a%b;
		a=tmp;
		//cout<<a<<b<<endl;
		if(b==0)break;
	}
	cout<<a<<" "<<ta*tb/a<<endl;
	}
	return 0;
}