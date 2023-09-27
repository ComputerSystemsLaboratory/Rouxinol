#include<iostream>
using namespace std;

void show(int arr[], int N){
	for(int i=0; i<N; i++)
		if(i<N-1)
			cout<<arr[i]<<' '<<flush;
		else
			cout<<arr[i]<<flush;
	cout<<endl;
}


void swap(int& a, int& b){
	int t=a;
	a=b;
	b=t;
}

int SelectionSort(int*, int);

int main()
{
	int N;
	cin>>N;
	int* arr=new int[N];
	for(int i=0; i<N; i++)
		cin>>arr[i];
	
	int count=SelectionSort(arr, N);
	show(arr, N);
	cout<<count<<endl;

}

int SelectionSort(int* arr, int N){

	int mini,counter=0;
	for(int i=0; i<N-1; i++) {
		mini=i;

		for(int j=i+1; j<N; j++) {

			mini= (arr[mini] > arr[j])? j : mini;

		}

		if(mini != i){
			swap( arr[mini], arr[i] );
			counter++;
		}
		//show(arr, N);
	}
	return counter;
}