#include <iostream>
#include <vector>

void OutputHeap(std::vector<int>& Heap)
{
	int Count = Heap.size();
	for(int i = 1; i <= Count; ++i){
		std::cout << "node "  << i << ": "
		          << "key = " << Heap[i - 1] << ", ";
		if(i > 1){
			std::cout << "parent key = " << Heap[i / 2 - 1] << ", ";
		}
		if(2 * i <= Count){
			std::cout << "left key = " << Heap[2 * i - 1] << ", ";
		}
		if(2 * i + 1 <= Count){
			std::cout << "right key = " << Heap[2 * i] << ", ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int Count = 0;
	std::cin >> Count;
	std::vector<int> Heap(Count);
	for(int i = 0; i < Count; ++i){
		std::cin >> Heap[i];
	}
	
	OutputHeap(Heap);
	
	return 0;
}