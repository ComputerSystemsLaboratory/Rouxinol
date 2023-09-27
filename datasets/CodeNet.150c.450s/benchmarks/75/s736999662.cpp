// ALDS 1_9_B
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &btree, int i){
	int largest = i;

	if(2*i < btree.size())
		if(btree[2*i] > btree[i])
			largest = 2*i;

	if(2*i+1 < btree.size())
		if(btree[2*i+1] > btree[largest])
			largest = 2*i+1;

	if(largest != i){
		int temp = btree[i];
		btree[i] = btree[largest];
		btree[largest] = temp;

		maxHeapify(btree, largest);
	}
}

void buildMaxHeap(vector<int> &btree){
	for(int i=(btree.size()-1)/2;i>=1;i--)
		maxHeapify(btree, i);
}

int main(){
	int H;
	vector<int> btree;

	cin>>H;
	btree.resize(H+1);

	for(int i=1;i<=H;i++)
		cin>>btree[i];

	buildMaxHeap(btree);
	
	for(int i=1;i<btree.size();i++)
		cout<<" "<<btree[i];
	cout<<endl;

	return 0;
}