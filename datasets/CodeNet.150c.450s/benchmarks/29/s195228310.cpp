#include <iostream>
#include <string>
using namespace std;

string DELETE = "delete";
string INSERT = "insert";
string DELETEFIRST = "deleteFirst";
string DELETELAST = "deleteLast";

struct Node {
	int key;
	Node *prev, *next;
};

Node *head;

Node* insertX(Node* head, int val){
	// key?????????????????\?????????????????????????????????????????????
	if(head	-> key == -1){
		head -> key = val;
		return head;
	}else{
		Node *newhead;
		newhead = new Node[1];
		newhead -> key = val;
		newhead -> prev = head -> prev;
		newhead -> next = head;

		(head -> prev) -> next = newhead;
		head -> prev = newhead;
		return newhead;
	}

}

Node* deleteX(Node* head, int val){
	// key??????????????????????????????????????????????????????
	
	
	//?????????val???????´¢
	if(head -> key == val){
		if(head -> next == head){
			head -> key = -1;
			return head;
		}
		
		(head -> prev) -> next = head -> next;
		(head -> next) -> prev = head -> prev;
		return head -> next;
	}else{
		Node* search;
//		search = (Node*)malloc(sizeof(Node));
		search = head -> next;
		while(head != search){ 
			if(search -> key == val){
				(search -> prev) -> next = search -> next;
				(search -> next) -> prev = search -> prev;
				break;
			}
			search = search -> next;
		}
		return head;
	}

}

Node* deleteFirst(Node* head){
	if(head -> next == head){
		head -> key = -1;
		return head;
	}
	head -> prev -> next = head -> next;
	head -> next -> prev = head -> prev;
	return head -> next;
}

Node* deleteLast(Node* head){
	if(head -> next == head){
		head -> key = -1;
		return head;
	}
	head -> prev = head -> prev -> prev;
	head -> prev -> next = head;
	return head;
}

void printElements(Node* head){
	if(head -> key == -1){
		return;
	}
	cout << head -> key;

	Node *p = head -> next;
	while(p != head){
		cout << " " << p -> key;
		p = p -> next;
	}
	cout << endl;
}

int main(){

	// ?????????
	head = new Node[1];
	head -> key = -1;
	head -> prev = head;
	head -> next = head;
	
	int n;
	cin >> n;

	string instruction;
	int key;

	for(int i=0; i<n; i++){	
		cin >> instruction;

		if(instruction == DELETE){
			cin >> key;
			head = deleteX(head, key);
		}else if(instruction == INSERT){
			cin >> key;
			head = insertX(head, key);

		}else if(instruction == DELETEFIRST){
			head = deleteFirst(head);
		}else if(instruction == DELETELAST){
			head = deleteLast(head);
		}
	}
		
	printElements(head);
		
	return 0;

}