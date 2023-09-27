#include<iostream>
#include<cstring>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};

class List
{
private:
	Node* mother;
public:
	List();
	~List();
	void Ins(int);
	void Del(int);
	void DelFirst();
	void DelLast();
	void Show();
};

List::List()
{
	mother = new Node;
	mother->data = -1;
	mother->next = this->mother;
	mother->prev = this->mother;
}

void List::Ins(int x)
{
	Node *tmp;
	tmp = this->mother->next;
	this->mother->next = new Node;
	this->mother->next->data = x;
	this->mother->next->next = tmp;
	this->mother->next->prev = mother;
	tmp->prev = mother->next;
	
	return;
}

void List::Del(int x)
{
	Node *tmp;
	tmp = this->mother->next;
	while (tmp != this->mother)
	{
		if (tmp->data == x)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			delete tmp;
			break;
		}
		tmp = tmp->next;
	}
	return;
}

void List::DelFirst()
{
	Node *tmp;
	tmp = this->mother->next;
	tmp->next->prev = mother;
	this->mother->next = tmp->next;
	delete tmp;
}

void List::DelLast()
{
	Node *tmp;
	tmp = this->mother->prev;
	this->mother->prev = tmp->prev;
	tmp->prev->next = mother;
	delete tmp;
}

void List::Show()
{
	Node *tmp;
	tmp = mother->next;
	cout << tmp->data;
	tmp = tmp->next;
	while (tmp != mother)
	{
		cout << " " << tmp->data;
		tmp = tmp->next;
	}
	cout << endl;
	return;
}

List::~List()
{
	Node *tmp;
	tmp = mother->next;
	while (1)
	{
		tmp = tmp->next;
		delete tmp->prev;
		if (tmp == mother)
			break;
	}
}

int main()
{
	int n, x;
	char command[20];
	List list;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> command;
		if (!strcmp(command, "insert"))
		{
			cin >> x;
			list.Ins(x);
		}
		else if (!strcmp(command, "delete"))
		{
			cin >> x;
			list.Del(x);
		}
		else if (!strcmp(command, "deleteFirst"))
			list.DelFirst();
		else
			list.DelLast();
	}
	list.Show();

	return 0;
}
