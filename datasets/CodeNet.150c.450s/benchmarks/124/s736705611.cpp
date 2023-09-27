#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

class TNode
{
	std::list<std::pair<TNode*, int> > FNexts;
	int  FDistance;
public:
	TNode()
	: FDistance(-1)
	{
	}
	
	int GetDistance()const {return FDistance;}
	
	void Push(TNode* New, int Weight)
	{
		FNexts.push_back(std::make_pair(New, Weight));
	}
	
	void Visit(int Distance)
	{
		if(FDistance >= 0 && Distance > FDistance) return;
		FDistance = Distance;
		for(std::list<std::pair<TNode*, int> >::iterator It = FNexts.begin(); It != FNexts.end(); ++It){
			It->first->Visit(Distance + It->second);
		}
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
			FNodes[i] = new TNode();
		}
	}
	
	~TGraph()
	{
		for(unsigned int i = 0; i < FNodes.size(); ++i){
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
			int Target, Weight;
			std::cin >> Target >> Weight;
			FNodes[Index]->Push(FNodes[Target], Weight);
		}
	}
	
	void BreathFirstSearch()
	{
		FNodes[0]->Visit(0);
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
		std::cout << i << " " << Graph.Distance(i) << std::endl;
	}
	return 0;
}