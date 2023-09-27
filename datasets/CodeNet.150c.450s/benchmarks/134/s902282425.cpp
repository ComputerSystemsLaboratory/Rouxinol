#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct TNode
{
	int Index;
	TNode* Parent;
	TNode* Left;
	TNode* Right;
	
	TNode();
};

TNode::TNode()
{
	Index  = -1;
	Parent = NULL;
	Left   = NULL;
	Right  = NULL;
}

typedef std::vector<TNode> TBinaryTree;

void InputNode(TBinaryTree& Tree)
{
	int Index;
	std::cin >> Index;
	Tree[Index].Index = Index;
	
	int Left;
	std::cin >> Left;
	if(Left >= 0){
		Tree[Index].Left  = &(Tree[Left]);
		Tree[Left].Parent = &(Tree[Index]);
	}
	
	int Right;
	std::cin >> Right;
	if(Right >= 0){
		Tree[Index].Right  = &(Tree[Right]);
		Tree[Right].Parent = &(Tree[Index]);
	}
}

const TNode* GetRoot(const TBinaryTree& Tree)
{
	const TNode* Node = &(Tree[0]);
	while(Node->Parent){
		Node = Node->Parent;
	}
	return Node;
}

const TNode* GetRightEnd(const TBinaryTree& Tree)
{
	const TNode* Node = GetRoot(Tree);
	while(Node->Right){
		Node = Node->Right;
	}
	return Node;
}

void OutputPreOrder(const TNode* Root, const TNode* End)
{
	if(Root == NULL) return;
	std::cout << " " << Root->Index;
	OutputPreOrder(Root->Left, End);
	OutputPreOrder(Root->Right, End);
}

void OutputInorder(const TNode* Root, const TNode* End)
{
	if(Root == NULL) return;
	OutputInorder(Root->Left, End);
	std::cout << " " << Root->Index;
	OutputInorder(Root->Right, End);
}

void OutputPostOrder(const TNode* Root, const TNode* End)
{
	if(Root == NULL) return;
	OutputPostOrder(Root->Left, End);
	OutputPostOrder(Root->Right, End);
	std::cout << " " << Root->Index;
}

void OutputWalkOrders(const TBinaryTree& Tree)
{
	std::cout << "Preorder" << std::endl;
	OutputPreOrder(GetRoot(Tree), GetRightEnd(Tree));
	std::cout << std::endl;
	std::cout << "Inorder" << std::endl;
	OutputInorder(GetRoot(Tree), GetRightEnd(Tree));
	std::cout << std::endl;
	std::cout << "Postorder" << std::endl;
	OutputPostOrder(GetRoot(Tree), GetRoot(Tree));
	std::cout << std::endl;
}

int main()
{
	int Count;
	std::cin >> Count;
	TBinaryTree BinaryTree(Count);
	for(int i = 0; i < Count; i++){
		InputNode(BinaryTree);
	}
	OutputWalkOrders(BinaryTree);
	return 0;
}