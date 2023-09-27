#include <iostream>
#include <vector>
using namespace std;

void Output(const vector<int>& Heap)
{
	int Size = Heap.size() - 1;
	for(int i = 0; i < Size; i++){
		int MyId     = i + 1;
		int ParentId = MyId / 2;
		int LChildId = 2 * MyId;
		int RChildId = 2 * MyId + 1;
		cout << "node "  << MyId       << ": ";
		cout << "key = " << Heap[MyId] << ", ";
		if(ParentId >= 1){
			cout << "parent key = " << Heap[ParentId] << ", ";
		}
		if(LChildId <= Size){
			cout << "left key = "   << Heap[LChildId] << ", ";
		}
		if(RChildId <= Size){
			cout << "right key = "  << Heap[RChildId] << ", ";
		}
		cout << endl;
	}
}

int main()
{
	int H;
	cin >> H;
	vector<int> Heap(H+1);
	for(int i = 0; i < H; i++){
		cin >> Heap[i+1];
	}
	Output(Heap);
	return 0;
}