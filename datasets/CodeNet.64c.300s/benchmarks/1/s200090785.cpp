#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int n, a[100000];
	
	cin>>n;
	int i;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	int r = a[i-1]; //???????°????
	
	int j=-1,k=-1;
	for(int l=0 ; l<i-1; l++){
		if(a[l] <= r){
			swap(a[j+1],a[l]);
			j++;
			k++;
		}else{
			k++;
		}
	}
	swap(a[j+1],a[i-1]);
	k++;
	
	for(int l=0 ; l<n ; l++){
		if(l) cout<<" ";
		if(l == j+1){
			cout<<"["<<a[l]<<"]";
		}else{
			cout<<a[l];
		}
	}
	cout<<endl;
	
	return 0;
}