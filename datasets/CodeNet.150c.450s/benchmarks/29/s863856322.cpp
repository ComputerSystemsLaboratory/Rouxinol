#include <cstdlib>
#include <iostream>
#include <stdio.h>



class Node
{
	int key;
	Node *prev, *next;

public:


	void setKey(const int key) {
		this->key = key;
	}

	void setPrev(Node *prev) {
		this->prev = prev;
	}

	void setNext(Node *next) {
		this->next = next;
	}

	int getKey() {
		return this->key;
	}

	Node* getPrev() {
		return this->prev;
	}

	Node* getNext() {
		return this->next;
	}

};


class DoublyLinkedList
{
	Node nil;//??????

public:

	DoublyLinkedList();//??????????????????
	virtual ~DoublyLinkedList();//??¨????´??????????
	Node* listSearch(int key);//?????°???key?????????????´??????????
	void insertNode(int key);//?????°???key?????????????´???????????????????
	void deleteNode(int key);//?????°???key?????????????´??????????
	void deleteFirst();//?????????????´??????????
	void deleteLast();//?????????????´??????????
	void printList();//??¨????´???????????????????????????????????????§????????£?????¨???
	void deleteNode(Node* t);//?????°???????´??????????
	void doCommand(std::string command, int key);//?????°??????????????????
	void doCommandByInput();//??????????¨??????\?????????????????????
	void doNumCommandByInput();//????????°???????????????????????????????????????

};




//??????????????????
DoublyLinkedList::DoublyLinkedList() {
	//???????????????
	nil.setPrev(&nil);
	nil.setNext(&nil);
}


//??¨????´??????????
DoublyLinkedList::~DoublyLinkedList() {
	Node *current;//?????¨???????´?
	Node *last = &nil;

	current = nil.getNext()->getNext();//2?????????????´??????????

	//??¨????´????????????????
	while (current != last) {//??¨????´??????°???
		delete current->getPrev();//??????????´??????????
		current = current->getNext();//?¬????????´????
	}
}

//?????°???????´??????????
void DoublyLinkedList::deleteNode(Node* t) {
	if (t == &nil) return;
	t->getPrev()->setNext(t->getNext());
	t->getNext()->setPrev(t->getPrev());
	delete t;
}

//?????°???key?????????????´??????????
void DoublyLinkedList::deleteNode(int key) {
	deleteNode(listSearch(key));
}

//?????????????´??????????
void DoublyLinkedList::deleteFirst() {
	deleteNode(nil.getNext());
}

//?????????????´??????????
void DoublyLinkedList::deleteLast() {
	deleteNode(nil.getPrev());
}

//??¨????´???????????????????????????????????????§????????£?????¨???
void DoublyLinkedList::printList() {
	Node *current;
	current = nil.getNext();

	bool isFirst = true;


	while (current != &nil) {

		if (!isFirst) {
			putchar(' ');
		}
		else {
			isFirst = false;
		}

		printf("%d",current->getKey());
		current = current->getNext();
	}


	printf("\n");
}

//?????°???key?????????????´???????????????????
void DoublyLinkedList::insertNode(int key) {
	Node* x = new Node();
	x->setKey(key);
	x->setNext( nil.getNext());
	nil.getNext()->setPrev(x);
	nil.setNext(x);
	x->setPrev(&nil);
}

//?????°???key?????????????´??????????
Node* DoublyLinkedList::listSearch(int key) {
	Node *current;
	current = nil.getNext();

	while (current != &nil&&current->getKey()!=key) {
		current = current->getNext();
	}

	return current;
}

//?????°??????????????????????????????
void DoublyLinkedList::doCommand(std::string command, int key) {
	
	if (command == "insert") {
		insertNode(key);
	}
	else if (command == "delete") {
		deleteNode(key);
	}
	else if (command == "deleteFirst") {
		deleteFirst();
	}
	else if (command == "deleteLast") {
		deleteLast();
	}

}

//????????????????????????????????§??????
void DoublyLinkedList::doCommandByInput() {

	char charCommand[20];
	std::string command;
	int key = -1;

	scanf("%s",charCommand);
	command = charCommand;

	if (command == "insert" || command == "delete") {
		scanf("%d",&key);
	}
	
	doCommand(command, key);
	
}

//?????????????????°??????????????????????????????????????§??????
void DoublyLinkedList::doNumCommandByInput() {

	int num;

	scanf("%d",&num);

	for (int i = 0; i < num; i++) {
		doCommandByInput();
	}
}



int main(void) {

	DoublyLinkedList doublyLinkedList;
	doublyLinkedList.doNumCommandByInput();
	doublyLinkedList.printList();

	return 0;
}