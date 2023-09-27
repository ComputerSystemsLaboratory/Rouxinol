#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
	if(b>a)	swap(a,b);
	while(a%b!=0){
		int tmp=a%b;
		a=b;	b=tmp;
	}
	return b;
}
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int g=gcd(a,b);
		cout<<g<<" "<<a/g*b<<endl;
	}
	return 0;
}