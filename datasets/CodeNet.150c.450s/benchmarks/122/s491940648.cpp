#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void MaxHeapify(std::vector<int>& Heap, unsigned int Index)
{
	unsigned int Left = 2 * Index;
	unsigned int Right = 2 * Index + 1;
	unsigned int Largest;
	if(Left < Heap.size() && Heap[Left] > Heap[Index]){
		Largest = Left;
	}else{
		Largest = Index;
	}
	
	if(Right < Heap.size() && Heap[Right] > Heap[Largest]){
		Largest = Right;
	}
	
	if(Largest != Index){
		std::swap(Heap[Largest], Heap[Index]);
		MaxHeapify(Heap, Largest);
	}
}

void BubbleUp(std::vector<int>& Heap, int Index)
{
	if(Index/2 == 0 || Heap[Index] <= Heap[Index/2]) return;
	std::swap(Heap[Index], Heap[Index/2]);
	BubbleUp(Heap, Index/2);
}

class TPriorityQueue
{
	std::vector<int> FHeap;
public:
	TPriorityQueue();
	void Insert(int Key);
	int ExtractMax();
};

TPriorityQueue::TPriorityQueue()
: FHeap(1, 0)
{
}

void TPriorityQueue::Insert(int Key)
{
	FHeap.push_back(Key);
	BubbleUp(FHeap, FHeap.size() - 1);
}

int TPriorityQueue::ExtractMax()
{
	int Result = FHeap[1];
	std::swap(FHeap[1], FHeap.back());
	FHeap.pop_back();
	MaxHeapify(FHeap, 1);
	return Result;
}

void Execute()
{
	TPriorityQueue Queue;
	while(1){
		std::string Command;
		std::cin >> Command;
		if(Command == "insert"){
			int Key;
			std::cin >> Key;
			Queue.Insert(Key);
		}
		if(Command == "extract"){
			std::cout << Queue.ExtractMax() << std::endl;
		}
		if(Command == "end") break;
	}
}

int main()
{
	Execute();
	return 0;
}