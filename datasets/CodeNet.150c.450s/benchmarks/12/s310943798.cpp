#include <iostream>
#include <stdio.h>
#define N 251
using namespace std;

int main(){
	int n,heap[N];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>heap[i];
	}
	for(int i=1;i<=n;i++){
		printf("node %d: key = %d, ",i,heap[i]);
		if((i/2)) printf("parent key = %d, ",heap[i/2]);
		if((2*i)<=n) printf("left key = %d, ",heap[2*i]);
		if((2*i+1)<=n) printf("right key = %d, ",heap[2*i+1]);
		cout<<endl;
	}
	return 0;
}