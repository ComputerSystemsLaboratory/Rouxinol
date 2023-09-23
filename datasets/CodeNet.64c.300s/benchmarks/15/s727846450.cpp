#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n;
	int a[100];
	int count=0;
	
	scanf(" %d", &n);
	for(int i=0; i<n; ++i) scanf(" %d", &a[i]);
	
	//selection sort	
	for(int i=0; i<n; ++i){
		int minj=i;
		for(int j=i; j<n; ++j){
			if(a[j]<a[minj]) minj=j;		
		}	
		
		if(i!=minj){
			swap(a[i], a[minj]);
			count++;
		}
	}
	
	for(int i=0; i<n; ++i){
		if(i>0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n%d\n", count);
	
}