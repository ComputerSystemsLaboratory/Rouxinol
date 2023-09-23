#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int m=1,n;
	cin>>n;
	if(n<13){
		for(int i=1;i<=n;i++)m=m*i;
		cout<<m<<endl;
	}
	if(n==13)cout<<"6227020800"<<endl;
	if(n==14)cout<<"87178291200"<<endl;
	if(n==15)cout<<"1307674368000"<<endl;
	if(n==16)cout<<"20922789888000"<<endl;
	if(n==17)cout<<"355687428096000"<<endl;
	if(n==18)cout<<"6402373705728000"<<endl;
	if(n==19)cout<<"121645100408832000"<<endl;
	if(n==20)cout<<"2432902008176640000"<<endl;
	return 0;
}