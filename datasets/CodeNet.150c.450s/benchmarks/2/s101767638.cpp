#include <iostream>
using namespace std;

int partition(int a[],int p,int r){
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}

int main(){
	int n,a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m=partition(a,0,n-1);
	for(int i=0;i<n;i++){
		if(i==m)
			cout<<'['<<a[i]<<']';
		else
			cout<<a[i];
		cout<<((i!=n-1)?' ':'\n');
	}
	return 0;
}