#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *prev;
	node *next;
    node(){
    	prev = 0;
    	next = 0;
    	data = 0;
    }
    node(int data){
    	prev = 0;
    	next = 0;
    	this->data = data;
    }
    node(int data, node *next){
    	prev = 0;
    	this->next = next;
    	this->data = data;
    }    friend class double_linked_list;
};

class double_linked_list{
public:
	node *first;
	node *last;
	double_linked_list(){
		first = 0;
		last  = 0;
	}
	void insert_value(int data);
	void delete_value(int data);
	void delete_first();
	void delete_last();
};

void double_linked_list::insert_value(int data){
	if(first == 0){
		node *new_first = new node(data);
		first = new_first;
		last = new_first;
	}else{
		node *new_first = new node(data, first);
		first->prev = new_first;
		first = new_first;
	}
}
void double_linked_list::delete_value(int data){
	node *current_node = first;
	// no data
	if(current_node == 0){
		return;
	}
	// first
	if(current_node->data == data){
		this->delete_first();
		return;
	}
	current_node = current_node->next;
	while(current_node != 0){
		if(current_node->data == data){
			if(current_node->next != 0){
				current_node->prev->next = current_node->next;
				current_node->next->prev = current_node->prev;
			}else{
				//last
				current_node->prev->next = 0;
				last = current_node->prev;
			}
			return;
		}
	current_node = current_node->next;
	}
}
void double_linked_list::delete_first(){
	node *current_node = first;
	// no data
	if(current_node == 0){
		return;
	}
	if(current_node->next != 0){
		current_node->next->prev = 0;
		first = current_node->next;
		return;
	}
	first = 0;
	last = 0;
	return;
}
void double_linked_list::delete_last(){
	if(this->last == 0){
		return;
	}
	if(last->prev != 0){
		last->prev->next = 0;
		last = last->prev;
	}else{
		last = 0;
		first = 0;
	}
}
int main(){
	int num;

	cin >> num;

	char command[12];
	int value;
	double_linked_list *result_list = new double_linked_list();
	for(int i = 0; i < num; ++i){
		cin >> command;
		if(command[0] == 'i'){
			cin >> value;
			result_list->insert_value(value);
		}else{
			if(command[6] == '\0'){
				cin >> value;
				result_list->delete_value(value);
			}
			else if(command[6] == 'F'){
				result_list->delete_first();
			}
			else if(command[6] == 'L'){
				result_list->delete_last();
			}
		}
	}
	node *test = result_list->first;
	while(test != 0){
		cout << test->data;
		if(test->next != 0){
			cout << " ";
		}
		test = test->next;
	}
	cout << endl;
	return 0;
}