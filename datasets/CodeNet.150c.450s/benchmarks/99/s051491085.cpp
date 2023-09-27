#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int n,mulc,muld,M,C,X,I;
	char c[9],d[9];
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int cc=0,dd=0;
		for(int j=0;j<8;j++){c[j]=0;d[j]=0;}
		scanf("\n%s %s",&c,&d);
		mulc=1;muld=1;
		for(int j=0;j<8;j++){
			if(c[j]>49&&c[j]<58)mulc=c[j]-48;
			if(c[j]=='m'){cc+=mulc*1000;mulc=1;}
			if(c[j]=='c'){cc+=mulc*100;mulc=1;}
			if(c[j]=='x'){cc+=mulc*10;mulc=1;}
			if(c[j]=='i'){cc+=mulc*1;mulc=1;}
			if(d[j]>49&&d[j]<58)muld=d[j]-48;
			if(d[j]=='m'){dd+=muld*1000;muld=1;}
			if(d[j]=='c'){dd+=muld*100;muld=1;}
			if(d[j]=='x'){dd+=muld*10;muld=1;}
			if(d[j]=='i'){dd+=muld*1;muld=1;}
		}
		int e=cc+dd;
		M=e/1000;e-=M*1000;C=e/100;e-=C*100;X=e/10;I=e-X*10;
		if(M>1)cout<<M<<"m";if(M==1)cout<<"m";
		if(C>1)cout<<C<<"c";if(C==1)cout<<"c";
		if(X>1)cout<<X<<"x";if(X==1)cout<<"x";
		if(I>1)cout<<I<<"i";if(I==1)cout<<"i";
		cout<<endl;
	}
}