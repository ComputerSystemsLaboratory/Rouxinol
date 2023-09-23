#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int i,n;
	cin>>n;
	a=100000;
	for(i=0;i<n;i++){
		b=a/20+a;
		if(b%1000!=0)b+=1000;
		b/=1000;
		b*=1000;
		a=b;
	}
	cout<<a<<endl;
	return 0;
}