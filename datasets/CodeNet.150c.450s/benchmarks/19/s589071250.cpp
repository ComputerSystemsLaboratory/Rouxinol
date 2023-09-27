#include <iostream>
using namespace std;

struct MyList{
	int data;
	MyList *next;
};

class MyQueue{
	MyList *head;
	MyList *tail;
public:
	MyQueue();
	~MyQueue();
	void enqueue(int data);
	int dequeue();
	bool isEmpty();
};
MyQueue::MyQueue()
{
	head = NULL;
	tail = NULL;
}
MyQueue::~MyQueue()
{
	while (head)
		dequeue();
}
void MyQueue::enqueue(int data)
{
	if (!head){
		head = new MyList;
		head->data = data;
		head->next = NULL;
		tail = head;
		return;
	}

	tail->next = new MyList;
	tail = tail->next;
	tail->data = data;
	tail->next = NULL;
	return;
}
int MyQueue::dequeue()
{
	int temp;
	MyList *lTemp;

	if (!head){
		cout << "error" << endl;
		return 0;
	}
	if (!head->next){
		temp = head->data;
		delete head;
		head = NULL;
		tail = NULL;
		return temp;
	}
	temp = head->data;
	lTemp = head;
	head = head->next;
	delete lTemp;
	lTemp = NULL;
	return temp;
}
bool MyQueue::isEmpty()
{
	if (!head) return false;
	else return true;
}

int main()
{
	MyQueue *queue1 = new MyQueue;
	MyQueue *queue2 = new MyQueue;
	int x, y;
	int a, b;

	while (true){
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		queue1->enqueue(x);
		queue2->enqueue(y);

	}

	while (queue1->isEmpty()){
		a = queue1->dequeue();
		b = queue2->dequeue();
		if (a < b) cout << a << ' ' << b << endl;
		else cout << b << ' ' << a << endl;
	}
		

	delete queue1;
	delete queue2;

	return 0;
}