#include <iostream>
using namespace std;

int main() {
	
	int a[100],n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int sw = 0;
	bool flag = true;
	for(int i; flag; i++){
		flag = false;
		for(int j=n-1; j>i; j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			        sw++;
				flag = true;
			}
		}
	}
	
	for(int i=0; i<n ; i++){
		if(i) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<sw<<endl;
	
	return 0;
}