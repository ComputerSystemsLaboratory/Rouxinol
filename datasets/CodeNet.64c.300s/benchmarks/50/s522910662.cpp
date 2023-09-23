
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int N,A[1000],c,hokan,flag,j,i,kaisuu;
	cin>>N;
	for(c=0;c<N;c++){
		cin>>A[c];
	}
	flag=1;
	i=0;
	kaisuu=0;
	while(flag){
		flag=0;
		for(j=N-1;i<j;j--){
			if(A[j]<A[j-1]){
				hokan=A[j];
				A[j]=A[j-1];
				A[j-1]=hokan;
				flag=1;
				kaisuu++;
			}
		}i++;
	}	for(c=0;c<N;c++){
		cout<<A[c];
		if(c!=N-1){
			cout<<" ";
		}else{
			cout<<endl;
		}
	}cout<<kaisuu<<endl;
	return 0;
}

