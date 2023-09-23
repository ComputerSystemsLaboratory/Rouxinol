#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int z=-1,n,i,j[255],o,maxo=-100000,s[5000]={0};
	scanf("%d",&n);
	while(n!=0){
		o=0;
		z++;
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		for(i=1;i<n;i++){
			if(s[i]<s[i-1]+s[i]){
				s[i]=s[i-1]+s[i];
			}

		}
		for(i=0;i<n;i++){
			maxo=max(maxo,s[i]);
		}
		j[z]=maxo;
		maxo=-100000;
		scanf("%d",&n);
	}
	for(i=0;i<=z;i++){
		printf("%d\n",j[i]);
	}
	return 0;
}