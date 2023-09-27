#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int a,b,c,d,e,x;
	
	while(cin>>a>>b>>c>>d>>e){
		for(int i=0;i<5;i++){
			if(a<b){x=a;a=b;b=x;}
			if(b<c){x=b;b=c;c=x;}
			if(c<d){x=c;c=d;d=x;}
			if(d<e){x=d;d=e;e=x;}
		}
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
		}
	return 0;
}