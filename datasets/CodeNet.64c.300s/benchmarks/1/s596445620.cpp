#include<iostream>
using namespace std;

void swap( int &a, int &b )
{
	int t=a;
	a=b;
	b=t;
}

int partition(int arr[], size_t arr_s, size_t left, size_t right)
{
	if( right >= arr_s ){
		cout<<"Error"<<endl;
		return -1;
	}


	size_t i=left-1;

	for( size_t j=left; j<right; j++ ){
		if( arr[j] <= arr[right] ){
			++i;
			swap( arr[j], arr[i] );
		}
	}
	swap( arr[right], arr[i+1] );
	return i+1; //??????i??????pivot ??\??????????????\??£???????????????????????????
}
	

int main()
{
	int *arr;
	size_t arr_s;
	cin>>arr_s;
	arr=new int[arr_s];
	for( size_t i=0; i<arr_s; i++ ){
		cin>>arr[i];
	}

	size_t pivot_i=partition(arr, arr_s, 0, arr_s-1);

	if( 0!=pivot_i ){
		cout<<arr[0]<<flush;
	}else{
		cout<<'['<<arr[0]<<']'<<flush;
	}
	for( size_t i=1; i<arr_s; i++ ){
		if( i!=pivot_i ){
			cout<<' '<<arr[i]<<flush;
		}else{
			cout<<' '<<'['<<arr[i]<<']'<<flush;
		}
	}
	cout<<endl;
}