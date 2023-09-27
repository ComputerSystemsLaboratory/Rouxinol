#include <iostream>
using namespace std;

int main() {
	int n;
	int flag;
	int count=0;
	cin>>n;
	int a[n];
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	
	flag=1;
	while(flag){
		flag=0;
		for(int i=n-1;i>0;i--){
			if(a[i]<a[i-1]){
				swap(a[i],a[i-1]);
				flag=1;
				count++;
			}
		}	
	}
	
	cout<<a[0];
	for(int k=1;k<n;k++){
		cout<<' '<<a[k];
	}
	cout<<'\n'<<count<<endl;
	
	return 0;
}