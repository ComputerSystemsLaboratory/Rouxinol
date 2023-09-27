#include<iostream>
#include<climits>
#include<cmath>

using namespace std;

void show( int arr[], unsigned int size )
{
	cout<<arr[0]<<flush;
	for( unsigned int i=1; i<size; i++ ){
		cout<<' '<<arr[i]<<flush;
	}
	cout<<endl;
}


int merge( int arr[], int arr_s, int lft, int md, int rgt)
{
	int cntr=0;

	int left_s=md-lft, right_s=rgt-md;
	int *left=new int[left_s+1], *right=new int[right_s+1]; //????????????????????¨???????????????????????????

	for( int i=0; i<left_s; i++ ){
		left[i]=arr[lft+i];
	}
	for( int i=0; i<right_s; i++ ){
		right[i]=arr[md+i];
	}

	left[left_s]=INT_MAX;
	right[right_s]=INT_MAX;
	
	for( int i=0, j=0, k=lft ; k<rgt; k++, cntr++ ){
		if( left[i] <= right[j] ){
			arr[k]=left[i];
			++i;
		}else{
			arr[k]=right[j];
			++j;
		}
	}
	return cntr;
}

int mergeSort(int arr[], int arr_s, int lft, int rgt)
{
	static int cntr=0;
	
	if( lft+1 < rgt ){
		int md= (lft + rgt)/2;
		mergeSort(arr, arr_s, lft, md);
		mergeSort(arr, arr_s, md, rgt);
		cntr+= merge(arr, arr_s, lft, md, rgt);
	}
	return cntr;
}

int main()
{
	int *arr, arr_s;
	cin>>arr_s;
	arr=new int[arr_s];
	for( int i=0; i<arr_s; i++ ){
		cin>>arr[i];
	}

	int cnt=mergeSort( arr, arr_s, 0, arr_s );
	show( arr, arr_s );
	cout<<cnt<<endl;
}