#include<iostream>
using namespace std;


long long int gcd(long long int a,long long int b){
	long long int q;
	q=a%b;
	if(q==0)return b;
	a=b;
	b=q;
	return gcd(a,b);
}
int main(){
	long long int a,b,q,g;
	while(cin>>a&&cin>>b){
		if(b>a){
			q=a;
			a=b;
			b=q;
		}
		g=gcd(a,b);
		cout<<g<<" "<<a*b/g<<endl;
	}
	return 0;
}