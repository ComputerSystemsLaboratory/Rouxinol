#include<iostream>
using namespace std;
#include<cstring>
#include<cstdio>
#include<cstdlib>
int cs = 0;

void merge(int source[], int temp[], int l, int mid, int r) {
	int i = l, j = mid + 1;
	int point = l;
	while (i < mid + 1 && j < r + 1) {
		if (source[i] < source[j])
			temp[point++] = source[i++],cs+=1;
		else
			temp[point++] = source[j++],cs+=1;
	}
	while (i < mid + 1) 
		temp[point++] = source[i++],cs+=1;
	while (j < r + 1) 
		temp[point++] = source[j++],cs+=1;
	for (i = l; i <= r; i++) 
		source[i] = temp[i];
}

void mergesort(int source[], int temp[], int l, int r) {
	if (l >= r) return;
	int mid = (l + r) / 2;
	mergesort(source, temp, l, mid);
	mergesort(source, temp, mid + 1, r);
	merge(source, temp, l, mid, r);
}
int a[510000];
int t[510000];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,t,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
		if(i!=n-1)
			putchar(' ');
	}
	cout<<endl;
	cout<<cs<<endl;
}
