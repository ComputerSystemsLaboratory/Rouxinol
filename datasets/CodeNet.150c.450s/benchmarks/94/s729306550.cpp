#include<iostream>
using namespace std;
int main(){

	int n,tmp,c=0;
	bool flag=true;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	while(flag){
		flag=false;
		for(int j=n-1;j>0;j--){
			if(A[j]<A[j-1]){
				tmp=A[j];
				A[j]=A[j-1];
				A[j-1]=tmp;
				flag=true;			
				c++;
				}
		}
	}
	for(int i=0;i<n-1;i++){
		cout<<A[i]<<" ";
	}
	cout<<A[n-1]<<endl<<c<<endl;

	return 0;
}