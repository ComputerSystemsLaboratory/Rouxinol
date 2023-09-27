#include <bits/stdc++.h> 

using namespace std; 

long _mergeSort(long arr[], long temp[], int left, int right); 
long merge(long arr[], long temp[], int left, int mid, int right); 

long mergeSort(long arr[], int array_size) 
{ 
	long temp[array_size]; 
	return _mergeSort(arr, temp, 0, array_size - 1); 
} 

long _mergeSort(long arr[], long temp[], int left, int right) 
{ 
	long mid, inv_count = 0; 
	
	if (right > left) 
	{
		mid = (right + left) / 2; 

		inv_count += _mergeSort(arr, temp, left, mid); 
		inv_count += _mergeSort(arr, temp, mid + 1, right); 

		inv_count += merge(arr, temp, left, mid + 1, right); 
	} 
	
	return inv_count; 
} 

long merge(long arr[], long temp[], int left, int mid, int right) 
{ 
	int i, j, k; 
	long inv_count = 0; 

	i = left;
	j = mid; 
	k = left; 
	
	while ((i <= mid - 1) && (j <= right)) 
	{ 
		if (arr[i] <= arr[j]) 
		{ 
			temp[k++] = arr[i++]; 
		} 
		else 
		{ 
			temp[k++] = arr[j++]; 
			inv_count = inv_count + (mid - i); 
		} 
	} 

	while (i <= mid - 1) 
		temp[k++] = arr[i++]; 

	while (j <= right) 
		temp[k++] = arr[j++]; 

	for (i = left; i <= right; i++) 
		arr[i] = temp[i]; 

	return inv_count; 
} 

int main()
{
	int n; 
	scanf("%d", &n);
	
	long arr[n];
	
	for(int i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	
			
	printf("%ld\n", mergeSort(arr, n));
	
	return 0;
}
