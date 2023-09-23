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
	
	//bubble sort	
	bool flag=true;
	while(flag){
		flag=false;
		for(int i=n-1; i>0; --i){
			if(a[i]<a[i-1]){
				swap(a[i], a[i-1]);
				flag=true;
				count++;
			}	
		}
	}
	
	for(int i=0; i<n; ++i){
		if(i>0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n%d\n", count);
	
}