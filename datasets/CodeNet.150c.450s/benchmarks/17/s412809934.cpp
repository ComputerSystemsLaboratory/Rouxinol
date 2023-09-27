#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;

int gcd(long long int m,long long int n){
	while(m!=n){
		if(m>n){m=m-n;
		}
		else n=n-m;
	}
	return m;
}
int lmc(long long int m,long long int n){
return m*n/gcd(m,n);
}

int main(){
int a[5];
for (int i=0;i<5;i++){
	cin>>a[i];
}
sort(a,a+5);
for (int i=0;i<5;i++){
	if (i==4){
		cout<<a[4-i];
	}
	else cout<<a[4-i]<<" ";
}
cout<<endl;
}