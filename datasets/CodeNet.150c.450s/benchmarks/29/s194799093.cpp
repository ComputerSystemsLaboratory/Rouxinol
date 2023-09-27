#include <iostream>

struct Element {
	int value;
	Element *pNext;
	Element *pPrev;
};

class DoublyLinkedList {
public:
	DoublyLinkedList()
	{
		pFirst = new Element{0, NULL, NULL};
		pLast = new Element{0, NULL, NULL};
		pFirst->pNext = pLast;
		pLast->pPrev = pFirst;
	}
	~DoublyLinkedList()
	{
		while (pFirst->pNext != pLast) {
			deleteFirst();
		}
		delete pFirst;
		delete pLast;
	}
	void insertX(int x) {
		Element *pInsert = new Element{x, pFirst->pNext, pFirst};
		pFirst->pNext->pPrev = pInsert;
		pFirst->pNext = pInsert;
	}
	void deleteX(int x) {
		Element *pSearch = pFirst->pNext;
		while (pSearch != pLast) {
			if (pSearch->value == x) {
				pSearch->pPrev->pNext = pSearch->pNext;
				pSearch->pNext->pPrev = pSearch->pPrev;
				delete pSearch;
				break;
			}
			pSearch = pSearch->pNext;
		}
	}
	void deleteFirst() {
		Element *pDelete = pFirst->pNext;
		if (pDelete != pLast) {
			pDelete->pPrev->pNext = pDelete->pNext;
			pDelete->pNext->pPrev = pDelete->pPrev;
		}
	}
	void deleteLast() {
		Element *pDelete = pLast->pPrev;
		if (pDelete != pFirst) {
			pDelete->pPrev->pNext = pDelete->pNext;
			pDelete->pNext->pPrev = pDelete->pPrev;
		}
	}
	void show() {
		Element *pSearch = pFirst->pNext;
		std::cout << pSearch->value;
		pSearch = pSearch->pNext;
		while (pSearch != pLast) {
			std::cout << " " << pSearch->value;
			pSearch = pSearch->pNext;
		}
		std::cout << std::endl;
	}
private:
	Element *pFirst;
	Element *pLast;
};

int main() {
	int n;
	std::cin >> n;
	std::string command;
	int x;
	DoublyLinkedList list;
	for (int i = 0; i < n; i++) {
		std::cin >> command;
		if (command == "insert") {
			std::cin >> x;
			list.insertX(x);
		} else if (command == "delete") {
			std::cin >> x;
			list.deleteX(x);
		} else if (command == "deleteFirst") {
			list.deleteFirst();
		} else if (command == "deleteLast") {
			list.deleteLast();
		}
	}
	list.show();
	return 0;
}
