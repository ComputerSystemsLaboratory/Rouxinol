#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

class TDoublyLinkedList
{
	std::deque<int> Data;
	
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
	Data.push_front(Number);
}

void TDoublyLinkedList::DeleteInput()
{
	int Number = 0;
	std::cin >> Number;
	std::deque<int>::iterator It = std::find(Data.begin(),Data.end(),Number);
	if(It != Data.end())
	{
		Data.erase(It);
	}
}

void TDoublyLinkedList::DeleteFirst()
{
	Data.pop_front();
}
void TDoublyLinkedList::DeleteEnd()
{
	Data.pop_back();
}

void TDoublyLinkedList::Output()const
{
	for(unsigned int i=0;i<Data.size();i++)
	{
		std::cout << Data[i] << std::flush;
		if(i < Data.size() - 1)
		{
			std::cout << " " << std::flush;
		}else{
			std::cout << std::endl;
		}
	}
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