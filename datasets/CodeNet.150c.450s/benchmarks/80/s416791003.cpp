#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>=b)return a;
	return b;
}

int main(){
	int a,b,c,d,s=0,t=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s=a+b+c+d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	t=a+b+c+d;
	printf("%d\n",max(s,t));
}