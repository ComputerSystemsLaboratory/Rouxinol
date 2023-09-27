#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int TopIndex = 1;
const int DummySize = 1;

void Exchange(vector<int>& Heap, int& InsertIndex, int& ParentIndex)
{
	swap(Heap[InsertIndex], Heap[ParentIndex]);
	InsertIndex = ParentIndex;
	ParentIndex = InsertIndex / 2;
}

void Insert(vector<int>& Heap, int k)
{
	Heap.push_back(k);
	int InsertIndex = Heap.size() - 1;
	int ParentIndex = InsertIndex / 2;
	while(InsertIndex > TopIndex && Heap[InsertIndex] > Heap[ParentIndex]){
		Exchange(Heap, InsertIndex, ParentIndex);
	}
}

void maxHeapify(vector<int>& A, int i)
{
	int H = A.size() - 1;
	int l = 2 * i;
	int r = 2 * i + 1;
	//????????????????????????????????§???????????§????????????????????¶
	int largest;
	if(l <= H && A[l] > A[i]){
		largest = l;
	}else{
		largest = i;
	}
	if(r <= H && A[r] > A[largest]){
		largest = r;
	}
	//i???????????????????????§????????´???
	if(largest != i){
		swap(A[i], A[largest]);
		//?????°??????????????????
		maxHeapify(A, largest);
	}
}

void ExtractMax(vector<int>& Heap)
{
	int TailIndex = Heap.size() - 1;
	cout << Heap[TopIndex] << endl;
	swap(Heap[TailIndex], Heap[TopIndex]);
	Heap.pop_back();
	maxHeapify(Heap, TopIndex);
}

int main()
{
	vector<int> Heap(DummySize);
	while(true){
		string Command;
		cin >> Command;
		if(Command == "insert"){
			int k;
			cin >> k;
			Insert(Heap, k);
		}else if(Command == "extract"){
			ExtractMax(Heap);
		}else{
			break;
		}
	}
	return 0;
}