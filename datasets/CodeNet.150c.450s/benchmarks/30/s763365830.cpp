#include<iostream>
using namespace std;
int main(){

	int n,tmp,minj,c=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		minj=i;
		for(int j=i;j<n;j++){
			if(A[j]<A[minj]){
				minj=j;
			}
		}
		tmp=A[i];
		A[i]=A[minj];
		A[minj]=tmp;
		if(i!=minj)c++;
	}
	for(int i=0;i<n-1;i++){
		cout<<A[i]<<" ";
	}
	cout<<A[n-1]<<endl<<c<<endl;

	return 0;
}