#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	int a[10002],b[10002],i,j=0,ans1[10000],ans2[10000];
	int A=0,B=0,n;
	cin>>n;
	while(n!=0){
		for(i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		for(i=0;i<n;i++){
			if(a[i]>b[i]){
				A+=(a[i]+b[i]);
			}else if(a[i]<b[i]){
				B+=(a[i]+b[i]);
			}else{
				A+=a[i];B+=b[i];
			}
		}
		ans1[j]=A;ans2[j]=B;
		j++;A=0;B=0;
		cin>>n;
	}
	for(i=0;i<j;i++){
		cout<<ans1[i]<<' '<<ans2[i]<<endl;
	}
	return 0;
}