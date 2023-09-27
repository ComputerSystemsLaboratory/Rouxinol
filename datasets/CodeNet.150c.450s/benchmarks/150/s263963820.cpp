#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int A[2000010],B[2000010];
int C[100010];

int main (){
	int n;
	cin>>n;
	for(int i=0;i<100000;i++) C[i]=0;
	for(int i=0;i<n;i++) {
		cin>>A[i+1];
		C[A[i+1]]++;
	}
	for(int i=1;i<100000;i++) C[i]+=C[i-1];
	for(int i=1;i<=n;i++){
		B[C[A[i]]]=A[i];
		C[A[i]]--;
	}
	for(int i =1;i<=n;i++) cout<<B[i]<<(i==n?"\n":" ");
	return 0;
}
