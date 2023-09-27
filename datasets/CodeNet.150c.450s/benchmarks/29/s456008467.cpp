#include <iostream>
#include <string>

using namespace std;

class Cell
{
private:
	int key;
	Cell *prev, *next;
public:
	Cell(int x, Cell* prev, Cell* next)
	{
		key = x;
		this->prev = prev;
		this->next = next;
	}
	int getKey() { return key; }
	void setKey(int key) { this->key = key; }
	Cell* getPrev() { return prev; }
	void setPrev(Cell* prev) { this->prev = prev; }
	Cell* getNext() { return next; }
	void setNext(Cell* next) { this->next = next; }
};

class LinkedList
{
private:
	Cell* centinel;
	Cell* findCellHas(int x)
	{
		Cell* ret;
		for (ret = getFirst(); ret->getKey() != x; ret = ret->getNext())
		{
			if (ret->getKey() == -1)
			{
				break;
			}
		}
		return ret;
	}
	void del(Cell* c)
	{
		c->getPrev()->setNext(c->getNext());
		c->getNext()->setPrev(c->getPrev());
		delete c;
	}
public:
	LinkedList()
	{
		centinel = new Cell(-1, NULL, NULL);
		centinel->setPrev(centinel);
		centinel->setNext(centinel);
	}
	~LinkedList()
	{
		delete centinel;
	}
	Cell* getFirst() { return centinel->getNext(); }
	Cell* getLast() { return centinel->getPrev(); }
	Cell* ins(int x)
	{
		Cell* c = new Cell(x, centinel, centinel->getNext());
		centinel->setNext(c);
		c->getNext()->setPrev(c);
		return c;
	}
	void del(int x)
	{
		Cell* c = findCellHas(x);
		if (c == centinel)
		{
			return;
		}
		else
		{
			del(c);
		}
	}
	void delFirst()
	{
		del(getFirst());
	}
	void delLast()
	{
		del(getLast());
	}
};

int main()
{
	int n;
	cin >> n;
	LinkedList ll;
	string cmd;
	int key;
	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "insert")
		{
			cin >> key;
			ll.ins(key);
		}
		else if(cmd == "delete")
		{
			cin >> key;
			ll.del(key);
		}
		else if (cmd == "deleteFirst")
		{
			ll.delFirst();
		}
		else if (cmd == "deleteLast")
		{
			ll.delLast();
		}
	}
	for (Cell* c = ll.getFirst(); c != ll.getLast(); c = c->getNext())
	{
		cout << c->getKey() << " ";
	}
	cout << ll.getLast()->getKey() << endl;
	return 0;
}
