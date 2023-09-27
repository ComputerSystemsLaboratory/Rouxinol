#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{	int data[30],i,w,n,a,b,c;
	cin >> w >> n;
	for(i=0;i<w;i++){
		data[i]=i+1;
	}

	for(i=0;i<n;i++){
		scanf("%d,%d",&a,&b);
		c=data[a-1];
		data[a-1]=data[b-1];
		data[b-1]=c;
	}
	for(i=0;i<w;i++){
		printf("%d\n",data[i]);
	}
	return 0;
}