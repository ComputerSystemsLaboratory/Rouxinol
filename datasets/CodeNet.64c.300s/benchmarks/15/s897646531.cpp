#include <bits/stdc++.h>
using namespace std;

void selectionSort(int[],int,int*);
static int n;
int a[100];

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int sum=0;
	selectionSort(a,n,&sum);
	for (int i = 0; i < n-1; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
	cout<<sum<<endl;


	
return 0;
}

void selectionSort(int a[], int n,int* sum){
	for (int i = 0; i < n; ++i)
	{
		int minj=i;
		for (int j = i; j < n; ++j)
		{
			if(a[j]<a[minj]) {
				minj=j;				
			}
		}
		if (a[i]!=a[minj]){
		swap(a[i],a[minj]);
		*sum= *sum+1;
		}
	}
}