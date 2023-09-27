#include <iostream>
#include <vector>

namespace
{
void OutputRow(int Length, std::vector<int>::const_iterator Begin, std::vector<int>::const_iterator End)
{
	std::vector<int>::const_iterator It = Begin;
	for(int i = 1; i < Length; ++i){
		if(It == End || i < *It){
			std::cout << 0;
		}else{
			std::cout << 1;
			++It;
		}
		
		if(i < Length - 1){
			std::cout << " ";
		}else{
			std::cout << std::endl;
		}
	}
}
}//unnamed namespace
//================================================================

class TGraph
{
	std::vector<std::vector<int> > FNodes;
public:
	TGraph(int Count);
	
	void InputNodes(int Index, int BranchCount);
	void OutputAdjacencyMatrix()const;
};

TGraph::TGraph(int Count)
:FNodes(Count + 1)
{
}

void TGraph::InputNodes(int Index, int BranchCount)
{
	for(int i = 0; i < BranchCount; ++i){
		int Target;
		std::cin >> Target;
		FNodes[Index].push_back(Target);
	}
}

void TGraph::OutputAdjacencyMatrix()const
{
	for(unsigned int i = 1; i < FNodes.size(); ++i){
		OutputRow(FNodes.size(), FNodes[i].begin(), FNodes[i].end());
	}
}
//================================================================

int main()
{
	int Count;
	std::cin >> Count;
	TGraph Graph(Count);
	for(int i = 0; i < Count; ++i){
		int Index;
		std::cin >> Index;
		int BranchCount;
		std::cin >> BranchCount;
		Graph.InputNodes(Index, BranchCount);
	}
	Graph.OutputAdjacencyMatrix();
	return 0;
}