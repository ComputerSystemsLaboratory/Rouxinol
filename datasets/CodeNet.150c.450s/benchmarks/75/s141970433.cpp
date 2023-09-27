#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxx=500100;
int A[maxx];
int n;

void max_heap(int i){
	int left=2*i,right=2*i+1,x;
	if(left<=n && A[left]>A[i]) x=left;
	else x=i;
	if(right<=n && A[right]>A[x] ) x=right;
	if(x!=i){
		swap(A[x],A[i]);
		max_heap(x);
	}
	return ;
}

int main (){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>A[i];
	for(int i=n/2;i>=1;i--) max_heap(i);
	for(int i=1;i<=n;i++) cout<<" "<<A[i];
	cout<<endl;
	return 0;
}
