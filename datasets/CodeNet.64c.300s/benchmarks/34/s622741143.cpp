#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
int n;
using namespace std;
const int maxn=10000;
int a[maxn];
int main(){
	std::ios::sync_with_stdio(false);
	memset(a,0,sizeof(a));
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i];
		if(i==n-1){
			cout<<"\n";
		}
		else{
			cout<<" ";
		}
	}
	
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		
		a[j+1]=key;
		for(int i=0;i<n;i++){
			cout<<a[i];
			if(i==n-1){
				
				cout<<"\n";
		}
			else{
				cout<<" ";
		}
			
		}
	
	}
	return 0;
}