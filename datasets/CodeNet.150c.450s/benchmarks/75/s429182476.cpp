#include<iostream>

using namespace std;

void maxHeapify(int arr[], int i, int n)    
{
	int largest = i;  
	int l = 2*i + 1;  
	int r = 2*i + 2;  

	if (l < n && arr[l] > arr[i]) largest = l;

	if (r < n && arr[r] > arr[largest]) largest = r;

	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		maxHeapify(arr, largest, n);
	}
}

void buildMaxHeap(int arr[], int n){
	for(int i = (n-2)/2; i >= 0; i--)
	{
		maxHeapify(arr,i,n);
	}
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++) cout << " " << arr[i];
	cout << endl;
}


int main(){
	int n, arr[500001];
	cin >> n;

	for(int i = 0; i < n; i++) cin >> arr[i];

	buildMaxHeap(arr, n);
	print(arr, n);
	
	return 0;
}
