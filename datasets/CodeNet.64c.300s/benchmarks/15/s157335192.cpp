#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a[10000],n,i,j,t,c=0,min;	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++){
		min=i;
		for(j=i;j<n;j++){
			if(a[j]<a[min])min=j;
		}
		if(i!=min){
			t=a[min];
			a[min]=a[i];
			a[i]=t;
			c++;
		}
	}
		for(i=0;i<n;i++){
			if(i)cout<<" ";
			cout<<a[i];
		}
		cout<<endl<<c<<endl;
			return 0;
		
}