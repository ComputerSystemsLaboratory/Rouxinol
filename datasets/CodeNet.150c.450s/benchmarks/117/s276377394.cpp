#include <iostream>
using namespace std;

int count = 0;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 

    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  

    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
    	count++;
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++;
        } 
        else
        { 
            arr[k] = R[j]; 
            j++;
        } 
        k++; 
    } 
  

    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
        count++;
    } 
  

    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
        count++;
    } 
} 
  

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 

        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main(){

	int n;

	cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1); 

	for(int i = 0; i < n; i++)
	{
		if(i == n-1)
			cout << arr[i];
		else	
			cout << arr[i] << " ";
	}

	cout << endl;
	cout << count;
	cout << endl;

	return 0;
}
