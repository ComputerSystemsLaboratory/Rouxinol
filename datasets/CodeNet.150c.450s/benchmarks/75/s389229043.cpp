#include <stdio.h>
#include <algorithm>

using namespace std;

int H;

void maxHeapify(long long array[],int i){
	int left = 2*i;
	int right = 2*i + 1;
	if(left > H) return;
	int largest = i;
	if(right <= H){
		if((array[right] > array[left]) && (array[right] > array[i])){
			largest = right;
		}else if((array[left] > array[right]) && (array[left] > array[i])){
			largest = left;
		}
	}else{
		if(array[i] < array[left]){
			largest = left;
		}
	}
	if(largest != i){
		swap(array[i],array[largest]);
		maxHeapify(array, largest);
	}
}

void buildMaxHeap(long long array[]){
	for(int i = H/2; i >=1; i--) maxHeapify(array,i);
}

int main(){
	scanf("%d",&H);
	long long array[H+1];

	for(int i = 1; i <= H; i++) scanf("%lld",&array[i]);

	buildMaxHeap(array);

	for(int i = 1; i <= H; i++) printf(" %lld",array[i]);
	printf("\n");
}