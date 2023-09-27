#include <iostream>
#include <string>

struct TNode
{
	int Value;
	TNode* Next;
	TNode* Prev;
	
	TNode(int AValue);
};

TNode::TNode(int AValue)
{
	Value = AValue;
	Next = NULL;
	Prev = NULL;
}

class TList
{
	TNode* FFirst;
	TNode* FEnd;
public:
	TList();
	~TList();
	
	void PushFront(int Value);
	void PopFront();
	void PopBack();
	TNode* Search(int Value)const;
	void Delete(int Value);
	void Show()const;
};

TList::TList()
{
	FFirst = NULL;
	FEnd   = NULL;
}

TList::~TList()
{
	while(FFirst != NULL)
	{
		PopFront();
	}
}

void TList::PushFront(int Value)
{
	TNode* Node = new TNode(Value);
	Node->Next = FFirst;
	if(FFirst != NULL)
	{
		FFirst->Prev = Node;
	}else{
		FEnd = Node;
	}
	FFirst = Node;
}

void TList::PopFront()
{
	TNode* NewFirst = FFirst->Next;
	if(NewFirst != NULL)
	{
		NewFirst->Prev = NULL;
	}else{
		FEnd = NULL;
	}
	delete FFirst;
	FFirst = NewFirst;
}

void TList::PopBack()
{
	TNode* NewEnd = FEnd->Prev;
	if(NewEnd != NULL)
	{
		NewEnd->Next = NULL;
	}else{
		FFirst = NULL;
	}
	delete FEnd;
	FEnd = NewEnd;
}

TNode* TList::Search(int Value)const
{
	for(TNode* Node = FFirst;Node != NULL;Node = Node->Next)
	{
		if(Node->Value == Value) return Node;
	}
	return NULL;
}

void TList::Delete(int Value)
{
	TNode* Node = Search(Value);
	if(Node == NULL) return;
	if(Node->Next != NULL)
	{
		Node->Next->Prev = Node->Prev;
	}else{
		FEnd = FEnd->Prev;
	}
	if(Node->Prev != NULL)
	{
		Node->Prev->Next = Node->Next;
	}else{
		FFirst = FFirst->Next;
	}
	delete Node;
}

void TList::Show()const
{
	TNode* Node = FFirst;
	while(Node->Next != NULL)
	{
		std::cout << Node->Value << " ";
		Node = Node->Next;
	}
	std::cout << Node->Value << std::endl;
}

class TDoublyLinkedList
{
	TList Data;
	
	void InsertInput();
	void DeleteInput();
	void DeleteFirst();
	void DeleteEnd();
public:
	void Manupulate(int Command);
	void Output() const;
};

void TDoublyLinkedList::InsertInput()
{
	int Number = 0;
	std::cin >> Number;
	Data.PushFront(Number);
}

void TDoublyLinkedList::DeleteInput()
{
	int Number = 0;
	std::cin >> Number;
	Data.Delete(Number);
}

void TDoublyLinkedList::DeleteFirst()
{
	Data.PopFront();
}
void TDoublyLinkedList::DeleteEnd()
{
	Data.PopBack();
}

void TDoublyLinkedList::Output()const
{
	Data.Show();
}

void TDoublyLinkedList::Manupulate(int Command)
{
	switch(Command)
	{
		case 0 : InsertInput();break;
		case 1 : DeleteInput();break;
		case 2 : DeleteFirst();break;
		case 3 : DeleteEnd();break;
	}
}

int CommandToIndex(std::string Command)
{
	if(Command == "insert") return 0;
	if(Command == "delete") return 1;
	if(Command == "deleteFirst") return 2;
	if(Command == "deleteLast") return 3;
	return -1;
}

int main()
{
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int Count = 0;
	std::cin >> Count;
	
	TDoublyLinkedList List;
	for(int i=0;i<Count;i++)
	{
		std::string Command;
		std::cin >> Command;
		List.Manupulate(CommandToIndex(Command));
	}
	List.Output();
	
	return 0;
}