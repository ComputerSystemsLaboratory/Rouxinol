
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int A[1000],i,minj,N,a,j,count;
	count=0;
	cin>>N;
	for(a=0;N>a;a++){
		cin>>A[a];
	}for(i=0;i<N;i++){
		minj=i;
		for(j=i;j<N;j++){
			if(A[j]<A[minj]){
				minj=j;
			}
		}if(i!=minj){
			count++;
		}
				a=A[i];
				A[i]=A[minj];
				A[minj]=a;
	}
	for(a=0;N>a;a++){
		cout<<A[a];
		if(a!=N-1){
			cout<<" ";
		}
	}cout<<endl;
	cout<<count<<endl;
	return 0;
}

