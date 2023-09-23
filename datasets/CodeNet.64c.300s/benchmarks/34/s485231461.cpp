#include<iostream>
using namespace std;

int main(){
	int N,i,k,v;
	cin >> N;
	int A[N];
	for (i=0;i<=N-1;i++){
		cin >> A[i];
	}
	for (k=0;k<=N-1;k++){
			if (k==N-1){
				cout << A[k]<<endl;
			}else{
				cout << A[k]<<" ";
			}
		}
	
	for (i=1;i<=N-1;i++){
		v=A[i];
		int j=i-1;
		while(j>=0 && A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		for (k=0;k<=N-1;k++){
			if (k==N-1){
				cout << A[k]<<endl;
			}else{
				cout << A[k]<<" ";
			}
		}
		
	}
	return 0;
}