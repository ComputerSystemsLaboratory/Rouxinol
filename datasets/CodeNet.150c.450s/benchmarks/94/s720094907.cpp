#include<iostream>
#include<algorithm>
using namespace std;

int bubbleSort(int A[], int n){
	int sw=0;
	int flag = 1;
	for(int i = 0; flag; i++){
		flag = 0;
		for(int j = n-1;  j > i;  j--){
			if(A[j] < A[j-1]){
				swap(A[j], A[j-1]);
				flag =1;
				sw = sw + 1;
			}
		}
	}
	return sw;
}

int main(){
	int n;
	int A[100];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	
	int count = bubbleSort(A, n);
	for(int i = 0; i <n; i++){
		if(i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count << endl;
	
	return 0;
}