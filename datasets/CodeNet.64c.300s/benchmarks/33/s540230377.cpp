#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b;
	char c;
	while(scanf("%d %c%d",&a,&c,&b)){
		if(c=='+') printf("%d\n",a+b);
		if(c=='-') printf("%d\n",a-b);
		if(c=='*') printf("%d\n",a*b);
		if(c=='/') printf("%d\n",a/b);
		if(c=='?') break;
	}
	
	return 0;
}
