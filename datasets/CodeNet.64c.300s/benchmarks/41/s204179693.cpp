#include<iostream>


using namespace std;

void MaxHeapify(int a[], int i, int x){
	int l = 2*i+1, r = 2*i+2;
	int largest = i;

	if(l < x && a[l] > a[i]){
		largest = l;
	}if(r < x && a[r] > a[largest]){
		largest = r;
	}if(largest != i){
		swap(a[i], a[largest]);
		MaxHeapify(a, largest, x);
	}
}

void buildMaxHeap(int a[], int x){
	for(int i =(x-2)/2; i >= 0; --i){
		MaxHeapify(a, i, x);
	}
}

void printMaxHeap(int *value, int number){
	for(int i=0; i<number; i++){
		cout << " " << value[i];
	}
	cout << endl;
}

int main(){
	int num, value[500010];

	cin >> num;

	for(int i =0; i <num; i++){
		cin >> value[i];
	}

	buildMaxHeap(value, num);
	printMaxHeap(value, num);

	return 0;
}
