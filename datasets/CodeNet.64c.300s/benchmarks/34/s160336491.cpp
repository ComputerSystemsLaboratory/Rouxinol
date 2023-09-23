#include<iostream>
using namespace std;

int main(){
	int N,A[100],a;
	cin>>N;
	A[0]=-1;
	for(int i=1;i<=N;i++){
		cin>>A[i];
	}
	for(int i=1;i<=N;i++){
		for(int j=i;j>0;j--){
			if(A[j]>=A[j-1]){
				break;
			}
			a=A[j];
			A[j]=A[j-1];
			A[j-1]=a;
		}
		for(int j=1;j<=N;j++){
			cout<<A[j];
			if(j==N){
				cout<<endl;
			}else{
				cout<<' ';
			}
		}
	}
	return 0;
}