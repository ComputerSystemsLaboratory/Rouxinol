#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

class TNode
{
	std::list<TNode*> FNexts;
	int  FDistance;
public:
	TNode()
	: FDistance(-1)
	{
	}
	
	int GetDistance()const {return FDistance;}
	
	void Push(TNode* New)
	{
		FNexts.push_back(New);
	}
	
	void Visit(int Distance)
	{
		if(FDistance >= 0 && Distance > FDistance) return;
		FDistance = Distance;
		for(std::list<TNode*>::iterator It = FNexts.begin(); It != FNexts.end(); ++It){
			(*It)->Visit(Distance + 1);
		}
	}
};

class TGraph
{
	std::vector<TNode*> FNodes;
public:
	TGraph(int Count)
	: FNodes(Count + 1)
	{
		for(int i = 1; i < Count + 1; ++i){
			FNodes[i] = new TNode();
		}
	}
	
	~TGraph()
	{
		for(unsigned int i = 1; i < FNodes.size(); ++i){
			delete FNodes[i];
		}
	}
	
	void InputNode()
	{
		int Index;
		std::cin >> Index;
		int BranchCount;
		std::cin >> BranchCount;
		for(int i = 0; i < BranchCount; ++i){
			int Target;
			std::cin >> Target;
			FNodes[Index]->Push(FNodes[Target]);
		}
	}
	
	void BreathFirstSearch()
	{
		FNodes[1]->Visit(0);
	}
	
	int Distance(int Target)const
	{
		return FNodes[Target]->GetDistance();
	}
};

int main()
{
	int Count;
	std::cin >> Count;
	TGraph Graph(Count);
	for(int i = 0; i < Count; ++i){
		Graph.InputNode();
	}
	Graph.BreathFirstSearch();
	
	for(int i = 0; i < Count; ++i){
		std::cout << i + 1 << " " << Graph.Distance(i + 1) << std::endl;
	}
	return 0;
}