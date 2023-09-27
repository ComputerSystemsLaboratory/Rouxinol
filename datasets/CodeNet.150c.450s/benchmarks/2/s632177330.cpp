#include <iostream>
using namespace std;

int n,ans;
int a[100001];

int partition(int p,int r){
	int temp;
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i=i+1;
			temp =a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	i=i+1;
	temp =a[i];
	a[i]=a[r];
	a[r]=temp;
	return i;
}

int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	ans=partition(0,n-1);
	for(int i=0;i<n-1;i++){
		if(ans==i){
			cout<<"["<<a[i]<<"]"<<" ";
		}else{
			cout<<a[i]<<" ";
		}
	}
	cout <<a[n-1]<<endl;
	return 0;
}