#include <bits/stdc++.h>
using namespace std;

int main() {
	while(1){
	int n,a,i=0;
	cin>>n;
	if(n==0)
		break;
	a=1000-n;
	if(a>=500){
		i+=1;
		a-=500;
	}
	if(a>=100){
		int b=a/100;
		i+=b;
		a-=100*b;
	}
	if(a>=50){
		i+=1;
		a-=50;
	}
	if(a>=10){
		int b=a/10;
		i+=b;
		a-=10*b;
	}
	if(a>=5){
		i+=1;
		a-=5;
	}
	if(a>=1)
		i+=a;
	cout<<i<<endl;
	}
	return 0;
}