#include<iostream>
using namespace std;

int main(){
	long long a,b,GCD,LCM,x,a2,b2;
	while(cin>>a>>b){
	a2=a;
	b2=b;
	while(a!=b){
		if(a>b){
			x=a-b;
			a=b;
			b=x;
		}
		else if(b>a){
			x=b-a;
			b=a;
			a=x;
		}
	}
	GCD=a;
	LCM=a2*b2/a;

	cout<<GCD<<" "<<LCM<<endl;
	}
	return 0;
}