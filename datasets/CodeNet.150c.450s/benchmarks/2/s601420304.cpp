#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<stack>
#include<list>

typedef long long ll;

using namespace std;

int a[100010] , n;

int partition(int p , int r){
	int x = a[r];
	int i,j;
	i = p-1;
	for(j = p ; j<r ; j++){
		if(a[j] <= x){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[r],a[i+1]);
	return i+1;
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i = 0 ; i<n ; i++){
		cin>>a[i];
	}
	
	int q = partition(0,n-1);
	
	for(int i = 0 ; i<n ; i++){
		if(i)
			printf(" ");
		if(i==q){
			printf("[%d]",a[i]);
		}
		else
			printf("%d",a[i]);
	}
	printf("\n");
	
		
	return 0;
}