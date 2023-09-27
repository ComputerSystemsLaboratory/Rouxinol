#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int A[100];
	for(int i=0;i<n;i++)
		cin>>A[i];
		
	for(int i=0;i<n;i++){
			cout<<A[i];
			if(i<n-1){
				cout<<' ';
			}else{
				cout<<endl;
			}
	}
	
	for(int i=1;i<n;i++){
		int v = A[i];
		int j=i-1;
		while(j>=0 && A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		for(int i=0;i<n;i++){
			cout<<A[i];
			if(i<n-1){
				cout<<' ';
			}else{
				cout<<endl;
			}
		}
	}

	
	return 0;	
}