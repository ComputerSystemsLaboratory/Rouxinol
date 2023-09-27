#include <iostream>
#include <stdio.h>
using namespace std;


void insertionSort(int a[], int n) // 
{
	int i, j;
	for(i = 1; i<n ; i++){
		int temp= a[i];
		j=i-1;
		while ( j>= 0 &&  a[j] > temp){
			a[j+1] = a[j];
			j--;			//j??????1????????????
		}
		a[j+1] = temp;
		for(int i=0; i< n ; i++){
		    cout << a[i];
		    if(i < (n-1)){
			    cout<<" ";
		    }
    	}
	cout << endl;   
	}
}
	
	
int main(void)
{
	int n;
	int a[1000]={0};

	cin >> n ;
	for(int i=0; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0; i< n ; i++){
		cout << a[i];
		if(i < (n-1)){
			cout<<" ";
		}
	}
	printf("\n");
	
	insertionSort(a,n);

	
	return 0;
}