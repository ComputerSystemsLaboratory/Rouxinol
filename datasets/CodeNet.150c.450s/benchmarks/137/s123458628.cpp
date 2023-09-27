#include <iostream>
#include <string>

struct TIntNode
{
	int Value;
	TIntNode* Parent;
	TIntNode* LargeBranch;
	TIntNode* SmallBranch;
	TIntNode(int AValue);
};

TIntNode::TIntNode(int AValue)
{
	Value       = AValue;
	LargeBranch = NULL;
	SmallBranch = NULL;
}

class TIntSet
{
	TIntNode* Root;
	bool Search(int AValue, TIntNode** Node)const;
public:
	bool Search(int AValue)const;
	void Add(int AValue);
	
	TIntSet();
	~TIntSet();
};

void Destroy(TIntNode* Node)
{
	if(Node == NULL) return;
	Destroy(Node->LargeBranch);
	Destroy(Node->SmallBranch);
	delete Node;
}

TIntSet::TIntSet()
{
	Root = NULL;
}

TIntSet::~TIntSet()
{
	Destroy(Root);
}

bool TIntSet::Search(int AValue)const
{
	TIntNode* Node = Root;
	return Search(AValue, &Node);
}

bool TIntSet::Search(int AValue, TIntNode** Node)const
{
	if(*Node == NULL) return false;
	if((*Node)->Value == AValue) return true;;
	if((*Node)->Value > AValue){
		if((*Node)->SmallBranch == NULL) return false;
		*Node = (*Node)->SmallBranch;
		return Search(AValue, Node);
	}else{
		if((*Node)->LargeBranch == NULL) return false;
		*Node = (*Node)->LargeBranch;
		return Search(AValue, Node);
	}
}

void TIntSet::Add(int AValue)
{
	TIntNode* Parent = Root;
	if(Search(AValue, &Parent)) return;
	if(Parent == NULL)
	{
		TIntNode* NewNode = new TIntNode(AValue);
		Root = NewNode;
		return;
	}
	if(Parent->Value > AValue){
		TIntNode* NewNode = new TIntNode(AValue);
		Parent->SmallBranch = NewNode;
	}else{
		TIntNode* NewNode = new TIntNode(AValue);
		Parent->LargeBranch = NewNode;
	}
}

int CharToInt(char c)
{
    switch(c)
    {
    case 'A' : return 0;
    case 'G' : return 1;
    case 'C' : return 2;
    case 'T' : return 3;
    }
    return 0;
}
 
int ToInt(std::string String)
{
    int Result = 0;
    int Order = 1;
    for(unsigned int i=0;i<String.size();i++)
    {
        Result += CharToInt(String[i]) * Order;
        Order *= 4;
    }
    return Result + Order;
}
 
std::string GetResultString(bool Result)
{
    return Result ? "yes" : "no";
}
 
int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    TIntSet Dictionary;
    int Count = 0;
    std::cin >> Count;
     
    for(int i=0;i<Count;i++)
    {
        std::string Command;
        std::cin >> Command;
        std::string Input;
        std::cin >> Input;
        if(Command == "insert")
        {
            Dictionary.Add(ToInt(Input));
        }
        else if(Command == "find")
        {
            std::cout << GetResultString(Dictionary.Search(ToInt(Input))) << std::endl;
        }
    }
    return 0;
}