#include <iostream>
using namespace std;

int main() {
	
	int a[100],n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int sw = 0;

	for(int i=0; i<n ; i++){
		int minj = i;
		for(int j=i; j<n; j++){
			if(a[minj]>a[j]){
				minj = j;
			}
		}
		if(i != minj){
			swap(a[i],a[minj]);
			sw++;
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