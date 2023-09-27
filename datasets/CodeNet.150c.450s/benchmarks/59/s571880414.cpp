#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int> A,int n){
	for(int i=1;i<n;i++){
		int v=A[i];
		int j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
			cout<<A[1];
		for(int j=2;j<n;j++)
			cout<<" "<<A[j];
		cout<<endl;
	}
}

int main(){
	
	int n;
	cin>>n;
	vector<int>A(n+1);
	for(int i=1;i<n+1;i++)
		cin>>A[i];
	insertionsort(A,n+1);
	
}