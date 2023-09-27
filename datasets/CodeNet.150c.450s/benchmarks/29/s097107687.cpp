#include<iostream>
#include<string>
using namespace std;

class Node{
	int data;
	Node* prev;
	Node* next;
	public:
	Node(){
		data = 0;
	}
	Node(int x, Node* p, Node* n){
		data = x;
		prev = p;
		next = n;
	}
	
	void SetPrev(Node* p){
		prev = p;
	}
	
	void SetNext(Node* n){
		next = n;
	}
	
	Node* GetPrev(){
		return prev;
	}
	
	Node* GetNext(){
		return next;
	}
	
	int GetData(){
		return data;
	}
};

class LinkedList{
	Node* head;
	Node* tail;
	public:
	LinkedList(){
		head = new Node();
		tail = new Node();
		head->SetNext(tail);
		tail->SetPrev(head);
	}
	
	void Insert(int x){
		Node* node = new Node(x, head, head->GetNext());
		node->GetNext()->SetPrev(node);
		node->GetPrev()->SetNext(node);
	}
	
	void Delete(int x){
		Node* current = head->GetNext();
		while(current != tail){
			if(current->GetData() == x){
				current->GetNext()->SetPrev(current->GetPrev());
				current->GetPrev()->SetNext(current->GetNext());
				delete current;
				return;
			}
			current = current->GetNext();
		}
	}
	
	void DeleteFirst(){
		Node* node = head->GetNext();
		node->GetNext()->SetPrev(head);
		head->SetNext(node->GetNext());
		delete node;
	}
	
	void DeleteLast(){
		Node* node = tail->GetPrev();
		tail->SetPrev(node->GetPrev());
		node->GetPrev()->SetNext(tail);
		delete node;
	}
	
	Node* GetHead(){
		return head;
	}
	
	Node* GetTail(){
		return tail;
	}
};

int main(){
	LinkedList list;
	int n;
	cin >> n;
	string command;
	for(int i = 0; i < n; i++){
		cin >> command;
		if(command == "insert"){
			int x;
			cin >> x;
			list.Insert(x);
		}else if(command == "delete"){
			int x;
			cin >> x;
			list.Delete(x);
		}else if(command == "deleteFirst"){
			list.DeleteFirst();
		}else if(command == "deleteLast"){
			list.DeleteLast();
		}
	}
	Node* node = list.GetHead()->GetNext();
	Node* tail = list.GetTail();
	while(node != tail){
		if(node != list.GetHead()->GetNext()){
			cout << ' ';
		}
		cout << node->GetData();
		node = node->GetNext();
	}
	cout << endl;
	return 0;
}