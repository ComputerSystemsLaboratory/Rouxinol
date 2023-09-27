#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxx=300;

int main(){
	int n;
	cin>>n;
	int A[maxx];
	for(int i=1;i<=n;i++) cin>>A[i];
	for(int i=1;i<=n;i++){
		printf("node %d: key = %d, ",i,A[i]);
		if(i/2>0) printf("parent key = %d, ",A[i/2]);
		if(2*i<=n) printf("left key = %d, ",A[i*2]);
		if(i*2+1<=n) printf("right key = %d, ",A[i*2+1]);
		printf("\n");
	}
	return 0;
}
