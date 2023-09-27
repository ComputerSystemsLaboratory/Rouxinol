#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int c,g;

int hcount(int n,int sum,int bf){
	if(n==0){
		if(sum==g){
			c++;
		}
	}
	else{
		for(int i=bf+1;i<10;i++){
			hcount(n-1,sum+i,i);
		}
	}
	return 0;
}

int main(){
	int n;
	while( scanf("%d %d",&n,&g)!=EOF){
		if(n==0&&g==0)break;
		c=0;
		hcount(n,0,-1);
		printf("%d\n",c);
	}
			
	return 0;
}