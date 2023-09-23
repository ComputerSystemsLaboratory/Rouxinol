#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int Partition(int A[],int p,int r){
	int x=A[r];
	int i=p-1;
	for(int j=p;j<=r-1;j++){
		if(A[j]<=x){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}

int main(void){
	std::ios_base::sync_with_stdio(false);

	int n,A[100000+5];

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	int kizyun=Partition(A,0,n-1);

	for(int i=0;i<n;i++){
		if(i!=kizyun) cout<<A[i];
		else cout<<"["<<A[i]<<"]";
		if(i==n-1) cout<<endl;
		else cout<<" ";
	}

	return 0;
}