#include<cstdio>
#include<iostream>
#include<cmath>

#define NMAX 2000000
#define IMAX 10000
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);

	int n;
	int cnt=0;
	int min=IMAX+1,max=-1;
	int A[NMAX+1],C[IMAX+1]={0};

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>A[i];
		if(A[i]>max) max=A[i];
		else if(A[i]<min) min=A[i];
	}

	for(int i=0;i<n;i++){
		C[A[i]]++;
	}
	
	for(int i=min;i<=max;){
		if(C[i]>0){
			A[cnt]=i;
			C[i]--;
			cnt++;
		}
		else i++;
	}

	for(int i=0;i<n-1;i++){
		cout<<A[i]<<" ";
	}
	cout<<A[n-1]<<endl;

	return 0;
}