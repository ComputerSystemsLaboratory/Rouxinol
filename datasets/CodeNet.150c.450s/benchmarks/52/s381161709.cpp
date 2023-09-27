#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;
void pop(int *i,int *a){
	cout<<*a<<endl;
	*i-=1;
	*a=0;
}
void push(int *i,int *a,int n){
	*a=n;
	*i+=1;
}
int main(){
	int a[100],i,n,j,k,p;

	for(i=0;i<100;i++){
		a[i]=0;
	}
	i=0;
	while(cin>>n){
		if(n==0){
			pop(&i,&a[i-1]);
		}else{
			push(&i,&a[i],n);
		}
	}
    return 0;
}