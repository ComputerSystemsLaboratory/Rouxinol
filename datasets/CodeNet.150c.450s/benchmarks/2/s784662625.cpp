#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int partition(int a[],int s,int g){
	int x=a[g];
	int gto=s-1;
	for(int j=s;j<g;j++){
		if(a[j]<=x){
			gto++;
			int alt=a[j];
			a[j]=a[gto];
			a[gto]=alt;
		}
	}
	gto++;
	int alt=a[g];
	a[g]=a[gto];
	a[gto]=alt;
	return gto;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	rep(i,n)cin>>a[i];
	int m=partition(a,0,n-1);
	rep(i,n){
		if(i==m)cout<<"["<<a[i]<<"]";
		else cout<<a[i];
		if(i!=n-1)cout<<" ";
	}
	cout<<endl;
	return 0;
}