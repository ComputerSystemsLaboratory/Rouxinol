#include <iostream> 
using namespace std;
int a[100000+10];
int n;
 
 
int partition(int p,int r){
	int x,i,j,t;
	x=a[r];
	i=p-1;
	for(j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
	t=a[i+1];a[i+1]=a[r];a[r]=t;
	return i+1;
}
 
int main() {
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int q=partition(0,n-1);
	
	
	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		if(i==q) cout<<"[";
			cout<<a[i];
		if(i==q) cout<<"]";
	}
	cout<<endl; 
	return 0;
}