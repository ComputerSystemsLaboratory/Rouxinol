#include<iostream>
using namespace std;

int* array;
int size;

void buildMaxHeap(int index){
	int left = index * 2 + 1;	
	int right = index * 2 + 2;	

	int max = index;
	if(left < size)max = array[index] > array [left] ? index : left; 
	if(right < size)max = array[max] > array [right] ? max : right; 

	if(max != index){
		int buf = array[index];
		array[index] = array[max];
		array[max] = buf;
		
		buildMaxHeap(max);
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);

	cin >> size;

	array = new int[size];

	for(int i = 0; i < size; i++){
		int num;
		cin >> num;
		array[i] = num;
	}

	for(int i = size / 2 - 1; i >= 0; i --){
		buildMaxHeap(i);
	}

	for(int i = 0; i < size; i ++){
		cout << " " << array[i];
	}

	cout << endl;

	return 0;
}