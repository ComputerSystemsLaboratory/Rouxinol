#include <cstdio>
#include <iostream>
using namespace std;

void Print(int a[], int p){
	for(int i=0; i<p; ++i){
		if(i>0) printf(" ");
		printf("%d", a[i]);	
	}	
	printf("\n");
}

int main(){
	int n;
	int a[100];
	
	scanf(" %d", &n);
	for(int i=0; i<n; ++i) scanf(" %d", &a[i]);
	
	for(int i=0; i<n; ++i){
		int v=a[i];
		int j=i-1;
		
		while(j>=0 && a[j]>v){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
		
		Print(a, n);
	}
		
}