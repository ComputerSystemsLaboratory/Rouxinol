#include <iostream>
#include <algorithm>
using namespace std;

int array[500000];
int n;

void maxheapify(int i){
	int left=(i+1)*2-1;
	int right=(i+1)*2;
	int largest=i;
	if(left<n&&array[largest]<array[left])	largest=left;
	if(right<n&&array[largest]<array[right])	largest=right;
	if(largest!=i){
		swap(array[largest],array[i]);
		maxheapify(largest);
	}
}

int main(int argc, char const *argv[]){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=n/2;i>=0;i--){
		maxheapify(i);
	}
	for(int i=0;i<n;i++){
		cout<<" "<<array[i];
	}
	cout<<endl;
	return 0;
}