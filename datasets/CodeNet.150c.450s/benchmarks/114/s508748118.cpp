#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

class TEdge;
struct TNode
{
	int TreeIndex;
	std::set<const TEdge*> Connected;
	
	TNode();
	void SetIndex(int Index, const TEdge* Edge);
};

class TEdge
{
	std::pair<TNode*, TNode*> FEnds;
	int FWeight;
public:
	TEdge(TNode* EndA, TNode* EndB, int Weight);
	
	bool operator<(const TEdge& Other)const;
	int  Weight()const {return FWeight;}
	bool ToMekeCycle()const;
	
	void JoinTree(int TreeIndex)const;
};

TNode::TNode()
:TreeIndex(0)
{
}

void TNode::SetIndex(int Index, const TEdge* Edge)
{
	if(TreeIndex >= Index) return;
	TreeIndex = Index;
	for(std::set<const TEdge*>::const_iterator It = Connected.begin(); It != Connected.end(); ++It){
		(*It)->JoinTree(Index);
	}
	Connected.insert(Edge);
}

TEdge::TEdge(TNode* EndA, TNode* EndB, int Weight)
:FEnds(EndA, EndB), FWeight(Weight)
{
}

bool TEdge::operator<(const TEdge& Other)const
{
	return Weight() < Other.Weight();
}

bool TEdge::ToMekeCycle()const
{
	return FEnds.first->TreeIndex > 0 && FEnds.first->TreeIndex == FEnds.second->TreeIndex;
}

void TEdge::JoinTree(int TreeIndex)const
{
	FEnds.first->SetIndex(TreeIndex, this);
	FEnds.second->SetIndex(TreeIndex, this);
}

class TGraph
{
	std::vector<TNode> FNodes;
	std::vector<TEdge> FEdges;
public:
	TGraph(int NodeCount);
	
	void AddEdge(int NodeIndexA, int NodeIndexB, int Weight);
	int WeightMinimumSpanningTree();
};

TGraph::TGraph(int NodeCount)
:FNodes(NodeCount)
{
}

void TGraph::AddEdge(int NodeIndexA, int NodeIndexB, int Weight)
{
	if(NodeIndexA <= NodeIndexB || Weight < 0) return;
	FEdges.push_back(TEdge(&FNodes[NodeIndexA], &FNodes[NodeIndexB], Weight));
}

int TGraph::WeightMinimumSpanningTree()
{
	std::sort(FEdges.begin(), FEdges.end());
	unsigned int TreeCount = 0;
	int Weight = 0;
	for(std::vector<TEdge>::iterator It = FEdges.begin(); It != FEdges.end() && TreeCount < FNodes.size() - 1; ++It){
		if(It->ToMekeCycle()) continue;
		It->JoinTree(TreeCount + 1);
		Weight += It->Weight();
		++TreeCount;
	}
	return Weight;
}

int main()
{
	int NodeCount;
	std::cin >> NodeCount;
	TGraph Graph(NodeCount);
	
	for(int i = 0; i < NodeCount; ++i)
	{
		for(int j = 0; j < NodeCount; ++j){
			int Weight;
			std::cin >> Weight;
			Graph.AddEdge(i, j, Weight);
		}
	}
	
	std::cout << Graph.WeightMinimumSpanningTree() << std::endl;
	return 0;
}