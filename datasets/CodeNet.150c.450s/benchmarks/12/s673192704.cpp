#include <iostream>
#include <vector>
#define DUMMYKEY 0
using namespace std;

void Output(const vector<int>& Heap)
{
	for(int i = 1; i < Heap.size(); i++){
		cout << "node "  << i       << ": ";
		cout << "key = " << Heap[i] << ", ";
		if(i/2 >= 1){
			cout << "parent key = " << Heap[i/2]  << ", ";
		}
		if(2*i <= Heap.size()-1){
			cout << "left key = "   << Heap[2*i]  << ", ";
		}
		if(2*i+1 <= Heap.size()-1){
			cout << "right key = "  << Heap[2*i+1] << ", ";
		}
		cout << endl;
	}
}

int main()
{
	int H;
	cin >> H;
	vector<int> Heap(H+1);
	Heap[0] = DUMMYKEY;
	for(int i = 1; i <= H; i++){
		cin >> Heap[i];
	}
	Output(Heap);
	return 0;
}