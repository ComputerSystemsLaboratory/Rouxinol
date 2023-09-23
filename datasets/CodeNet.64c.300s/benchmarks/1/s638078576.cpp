#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
 
int A[100010];
int n;
 
int partition(int left,int right){
	int i=left-1;
	for(int j=left;j<right;j++){
		if(A[j]<=A[right]) {
			swap(A[i+1],A[j]);
			i++;
		}
	}
	swap(A[right],A[i+1]);
	return i+1;	
}
 
int main (){
	cin>>n;
	for(int i =0;i<n;i++) cin>>A[i];
	int x=partition(0,n-1);
	for(int i =0;i<n;i++) {
		if(i==0) cout<<A[i];
		else if(i==x) cout<<" ["<<A[i]<<"]";
		else cout<<" "<<A[i];
	}
	cout<<endl;
	return 0;
}
