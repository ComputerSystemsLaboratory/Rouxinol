#include<iostream>
#include<utility>

using namespace std;

int partition(int A[],int p,int r);

int main(){

	int *A;
	int n;
	cin>>n;
	A = new int[n];

	for(int i=0;i<n;i++) cin>>A[i];

	int c = partition(A,0,n-1);
	
	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		if(i==c){
			cout<<"["<<A[i]<<"]";
		}else{
			cout<<A[i];
		}
	}
	cout<<endl;

	delete [] A;

	cin.get();
	cin.get();

}

int partition(int A[],int p,int r){
	int x = A[r];
	int i = p-1;
	for(int j=p;j<r;j++){
		if(x>=A[j]){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[r],A[i+1]);
	return i+1;
}