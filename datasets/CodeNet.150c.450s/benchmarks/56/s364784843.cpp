#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a[10000],i,j,n,saidai,saishou,u,q=0;
	long long goukei;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				u=a[i];
				a[i]=a[j];
				a[j]=u;
			}
		}
	}saidai=a[0];
	saishou=a[n-1];
	goukei=0;
	for(i=0;i<n;i++){
		goukei+=a[i];
	}cout<<saishou<<" "<<saidai<<" "<<goukei<<endl;
  return 0;
}