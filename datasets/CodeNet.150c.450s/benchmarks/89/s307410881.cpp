#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;

int main(){
	int a,d,n,i,j,p[1000000];
	for(i=2;i<1000000;i++){
		p[i]=0;
	}
	p[0]=1;p[1]=1;
	for(i=2;i<1000;i++){
		if(p[i]==0){
			for(j=2;j<(1000000/i);j++){
				p[i*j]=1;
			}
		}
	}
	while(1){
		int c=0;
		cin>>a>>d>>n;
		if(a+d+n==0)break;
		i=0;
		while(1){
			if(p[a+i*d]==0){
				c++;
			}
			if(c==n)break;
			i++;
		}
		cout<<a+i*d<<endl;
	}
    return 0;
}