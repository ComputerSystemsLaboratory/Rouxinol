#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[110];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	int k,mi;
	for(int i=0;i<n-1;i++){
		mi=a[i+1];
		k=i+1;
		for(int j=i+1;j<n;j++){
			if(a[j]<mi){
				k=j;
				mi=a[j];
			}
			
		}
		if(a[i]>mi){
			ans++;
			int l=a[i];
			a[i]=a[k];
			a[k]=l;
			
		}
		
	}
	
	
	for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	cout<<ans<<endl;
	return 0;
}