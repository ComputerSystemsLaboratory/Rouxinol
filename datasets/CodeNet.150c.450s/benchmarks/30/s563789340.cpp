#include<iostream>
#include<algorithm>
using namespace std;

int selectionSort(int A[], int n){
	int sw = 0;
	for(int i = 0; i < n; i++){
		int minij = i;
		for(int j = i;  j < n;  j++){
			if(A[minij] > A[j]){
				minij = j;
			}
		}
		if(A[i] > A[minij]){
			swap(A[i], A[minij]);
			sw = sw + 1;
		}
	}
	return sw;
}

int main(){
	int n;
	int A[100];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	
	int count = selectionSort(A, n);
	for(int i = 0; i < n; i++){
		if(i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count << endl;
	
	return 0;
}