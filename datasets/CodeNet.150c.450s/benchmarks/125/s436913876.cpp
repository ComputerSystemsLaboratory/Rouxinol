#include <iostream>
#include <list>
#include <vector>

struct TNode
{
	int Index;
	bool Visited;
	std::list<TNode*> Target;
	
	int ClockStart;
	int ClockEnd;
	
	TNode(int AIndex)
	: Index(AIndex), Visited(false), ClockStart(0), ClockEnd(0)
	{
	}
	
	void Visit(int& Clock)
	{
		if(Visited) return;
		Visited = true;
		ClockStart = Clock;
		++Clock;
		for(std::list<TNode*>::iterator It = Target.begin(); It != Target.end(); ++It){
			(*It)->Visit(Clock);
		}
		ClockEnd = Clock;
		++Clock;
	}
};

class TGraph
{
	std::vector<TNode*> FNodes;
public:
	TGraph(int Count)
	: FNodes(Count)
	{
		for(int i = 0; i < Count; ++i){
			FNodes[i] = new TNode(i + 1);
		}
	}
	
	~TGraph()
	{
		for(unsigned int i = 0; i < FNodes.size(); ++i){
			delete FNodes[i];
		}
	}
	
	void InputNode(int Index, int BranchCount)
	{
		for(int i = 0; i < BranchCount; ++i){
			int Target;
			std::cin >> Target;
			FNodes[Index - 1]->Target.push_back(FNodes[Target - 1]);
		}
	}
	
	void DepthFirstSearch()
	{
		int Clock = 1;
		for(unsigned int i = 0; i < FNodes.size(); ++i){
			FNodes[i]->Visit(Clock);
		}
	}
	
	void OutputClocks()const
	{
		for(unsigned int i = 0; i < FNodes.size(); ++i){
			std::cout << FNodes[i]->Index      << " "
			          << FNodes[i]->ClockStart << " "
			          << FNodes[i]->ClockEnd   << std::endl;
		}
	}
};

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
		Graph.InputNode(Index, BranchCount);
	}
	Graph.DepthFirstSearch();
	Graph.OutputClocks();
	return 0;
}