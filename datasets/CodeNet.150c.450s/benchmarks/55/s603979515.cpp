#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char x;
	int b,c;
	while(1){
		c=0;
		while(1){
			scanf("%c",&x);
			if(x=='\n')break;
			b=x-'0';
			c=c+b;
		}
		if(c==0)break;
		cout << c << endl;
	}
}