#include <iostream>
using namespace std;

int partition(int a[],int p,int r){
	int x = a[r];
	int i = p-1;
	for(int j = p;j<r;j++){
		if (a[j]<=x){
			i+=1;
			int tmp;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	int tmp;
	tmp = a[r];
	a[r] = a[i+1];
	a[i+1] = tmp;
	return i+1;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int pos = partition(a,0,n-1);
	for(int i=0;i<n;i++){
		if(i>0) cout<<" ";
		if(i==pos){
			cout<<"["<<a[i]<<"]";
			continue;
		}
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}