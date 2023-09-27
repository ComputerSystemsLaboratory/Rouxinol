#include <iostream>
using namespace std;

int main(){
	int A[110],n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1)cout<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++){
		for(int j=i;j>=1;j--){
			if(A[j]<A[j-1]){
				a=A[j];
				A[j]=A[j-1];
				A[j-1]=a;
			}
		}
		for(int j=0;j<n;j++){
			cout<<A[j];
			if(j!=n-1)cout<<" ";
		}
		cout<<endl;
		if(i==n-1)break;
	}
	return 0;
}