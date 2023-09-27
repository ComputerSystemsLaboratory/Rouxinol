#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int a[3],b;
	for(int i=0;i<3;i++){
		cin>>a[i];
		}
	for(int i=0;i<2;i++){
		for(int j=i+1;j<3;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
				}
			}
		}
	for(int i=0;i<2;i++){
		cout<<a[i]<<" ";
		}
	
	cout<<a[2]<<endl;
	return 0;
}