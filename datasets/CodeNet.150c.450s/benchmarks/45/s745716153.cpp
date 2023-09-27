#include <iostream>
#include <math.h>
using namespace std;
int a[31]={};
long long c[31]={};
int main(){
	long long m,n;
	cin >> m >> n;
	int max=0,e=n;
	for(int i=30; i>=0; i--){
		a[i]=e/(long long)pow(2,i);
		e=e%(long long)pow(2,i);
		if(a[i]==1 && max==0) max=i;
	}
	long long k=1,b=m;
	int l=0;
	while (l<max){
		c[l]=b;
		b=b*b;
		k=k*2;
		l++;
		if(b>1000000007) b=b%1000000007;
	}
	for(int i=0; i<max; i++){
		if(a[i]==1) b=b*c[i];
		if(b>1000000007) b=b%1000000007;
	}
	cout << b << endl;
}