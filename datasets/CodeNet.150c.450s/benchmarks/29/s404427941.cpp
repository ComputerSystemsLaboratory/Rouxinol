#include <iostream>
#include <string>
#include <ios>
using namespace std;

struct LinkedList
{
	struct Node
	{
		Node(int k): v(k), prev(0), next(0){}
		int v;
		Node* prev;
		Node* next;
	};

	LinkedList(): front(0), last(0){}
	~LinkedList(){
		Node* p = 0;
		Node* n = front;
		while(n){
			p = n;
			n = n->next;
			delete p;
		}
	}
	void insert(int k){
		Node* n = new Node(k);
		if(!front){
			front = last = n;
		} else {
			front->prev = n;
			n->next = front;
			front = n;
		}
	}
	void remove(int k){
		Node* n = front;
		while(n){
			if(n->v == k)
				break;			
			n = n->next;
		}
		if(n){
			if(!n->prev && n->next){
				n->next->prev = 0;
				front = n->next;
			} else if (!n->prev && !n->next) {
				front = last = 0;
			} else if (n->prev && !n->next) {
				n->prev->next = 0;
				last = n->prev;
			} else {
				n->prev->next = n->next;
				n->next->prev = n->prev;
			}
			delete n;
		}
	}
	void removeFirst(){
		if(!front) return;
		else if( front == last ){
			Node* n = front;
			front = last = 0;
			delete n;
		} else {
			Node* n = front;
			front->next->prev = 0;
			front = front->next;
			delete n;
		}
	}
	void removeLast(){
		if(!last) return;
		else if( front == last){
			Node* n = last;
			front = last = 0;
			delete n;
		} else {
			Node* n = last;
			last->prev->next = 0;
			last = last->prev;
			delete n;
		}
	}

	Node* front;
	Node* last;
};

int main(){
	ios::sync_with_stdio(false);

	int m, i, k;
	cin >> m;
	string s;
	LinkedList myList;
	for(i = 0; i < m; ++i){
		cin >> s;
		if( s == "insert" ){
			cin >> k;
			myList.insert(k);
		}else if( s == "delete" ){
			cin >> k;
			myList.remove(k);
		}else if (s == "deleteFirst"){
			myList.removeFirst();
		}else if (s == "deleteLast"){
			myList.removeLast();
		}
	}

	LinkedList::Node* n = myList.front;
	while(n){
		cout << n->v;
		if( n != myList.last )
			cout << " ";
		n = n->next;
	}
	cout << "\n";

	return 0;
}