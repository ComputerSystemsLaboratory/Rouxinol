#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,l,ma=0;
	cin>>n;
	int a[10010]={0};
	for(int i=0;i<n;i++){
		cin>>l;
		a[l]++;
		if(l>ma) ma=l;
	}

	
	for(int i=0;i<10010;i++){
		if(a[i]==0) continue;
		if(i!=ma){
			for(int j=0;j<a[i];j++) cout<<i<<" ";
		}
		else{
			for(int j=0;j<a[i]-1;j++) cout<<i<<" ";
			cout<<i<<endl;
		}
		
	}
	return 0;
}