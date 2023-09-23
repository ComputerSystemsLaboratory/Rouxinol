#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
	int a,b,c,d;
	int sum1,sum2;

	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum1=(a+b+c+d);
	fflush(stdin);
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum2=(a+b+c+d);
	if(sum1>=sum2)
		cout<<sum1<<endl;
	else
		cout<<sum2<<endl;

	return 0;
}