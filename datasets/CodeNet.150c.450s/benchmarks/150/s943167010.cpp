#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

void show( int arr[], size_t size )
{
	cout<<arr[1];
	for( size_t i=2; i<size; i++ ){
		cout<<' '<<arr[i];
	}
	cout<<endl;
}

void bucketSort( int arr[], const size_t arr_s, const int min, const int max )
{
//	size_t cnt_s=max - min +1;
	size_t cnt_s=max+2;
	int *cnt=new int[cnt_s];

	for( size_t i=0; i<cnt_s; i++ ){//
		cnt[i]=0;
	}


	for( size_t i=1; i<arr_s; i++ ){//
		cnt[ arr[i] ]++;
	}


	for( size_t i=1; i<cnt_s; i++ ){
		cnt[i]= cnt[i] + cnt[i-1];
	}

	int *sorted=new int[arr_s];
	for( size_t i=arr_s-1; i>0; i-- ){//
		sorted[ cnt[ arr[i]]]= arr[i];
		cnt[ arr[i] ]--;
		
	}

	show(sorted, arr_s);
	
	/*
	for( size_t i=1; i<arr_s; i++ ){
		arr[i]=sorted[i];
	}
	*/

	

	delete[] cnt;delete[] sorted;

}



int main()
{
	//arr : ???????????????
	size_t arr_s;	cin>>arr_s;arr_s++;
	int *arr=new int[arr_s];

	int max=INT_MIN;
//	int min=INT_MAX;

	for( size_t i=1; i<arr_s; i++ ){
		scanf("%d", &arr[i]);

//		if( arr[i] < min ) min=arr[i];
		if( arr[i] > max ) max=arr[i];
	}



	bucketSort( arr, arr_s, 0, max );
//	show(arr, arr_s);
	
	delete[] arr;


}