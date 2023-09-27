#include<iostream>
using namespace std;

void printArray(int array[],int n){
	for(int i=0;i<n;i++){
		if(i>0) cout<<" ";
		cout << array[i];
	}
	cout << endl;
}

void insertionSort(int array[],int n){
	int tmp,j;
	for(int i=1;i<n;i++){
		tmp = array[i];
		for(j=i-1;j>=0 && array[j]>tmp;j--){
			array[j+1]=array[j];
		}
		array[j+1]=tmp;
		printArray(array,n);
	}
}

int main(){
	int array[1001];
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >> array[i];
	}
	printArray(array,n);
	insertionSort(array,n);
	return 0;
}