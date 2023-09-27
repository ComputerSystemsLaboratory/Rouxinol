
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int v,j,i,A[1000],N;
	cin>>N;
	for(int x=0;N>x;x++){
		cin>>A[x];
	}for(int x=0;N>x;x++){
		cout<<A[x];
		if(x!=N-1){
			cout<<" ";
		}else{
			cout<<endl;
		}}
	for(i=1;i<N;i++){
		v=A[i];
		j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
			A[j+1]=v;
		}
		for(int x=0;N>x;x++){
			cout<<A[x];
			if(x!=N-1){
				cout<<" ";
			}else{
				cout<<endl;
			}
		}
	}
	return 0;
}

