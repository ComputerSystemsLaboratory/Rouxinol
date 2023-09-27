#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int work;
	work = *a;
	*a = *b;
	*b = work;
}

int selectionSort(int array[],int n){
	int minj,cnt=0;
	for(int i=0;i<n;i++){
		minj=i;
		for(int j=i;j<n;j++){
			if(array[j]<array[minj]){
				minj=j;
			}
		}
		if(i!=minj){
			swap(&array[i],&array[minj]);
			cnt++;
		}
	}
	return cnt;
}

void printArray(int array[],int n){
	for(int i=0;i<n;i++){
		if(i>0) cout << " ";
		cout << array[i];
	}
	cout << endl;
}

int main(){
	int n,cnt;
	cin >> n;
	int array[101];
	for(int i=0;i<n;i++){
		cin >> array[i];
	}
	cnt = selectionSort(array,n);
	printArray(array,n);
	cout << cnt << endl;
}