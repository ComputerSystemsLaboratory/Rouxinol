#include <iostream>
#include <string>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

#if INPUT_FROM_FILE
#define IS ifs
#else
#define IS std::cin
#endif

class ListNode{
public:
	int key;
	ListNode *prev;
	ListNode *next;

	ListNode(int k, ListNode *p, ListNode *n) : key(k), prev(p), next(n){ return;}

	~ListNode(){ return; }
};

class List{
private:
	ListNode *head_;
public:

	List() : head_(NULL){
		head_ = new ListNode(-1, NULL, NULL);
		head_->prev = head_;
		head_->next = head_;
	}

	~List(){
		ListNode *cn = head_->next;

		while(cn != head_){
			ListNode *next = cn->next;
			delete cn;
			cn = next;
		}
		delete head_; head_ = NULL;
	}

	void insert(int key){
		ListNode *first = head_->next;
		ListNode *n = new ListNode(key, head_, first);

		first->prev = n;
		head_->next = n;
		return;
	}

	void delete_(int key){
		ListNode *cn = head_->next;
		while(cn != head_){
			if(cn->key == key){
				ListNode *prev = cn->prev;
				ListNode *next = cn->next;

				prev->next = next;
				next->prev = prev;
				delete cn; cn = NULL;
				break;
			}
			else{
				cn = cn->next;
			}
		}
		return;
	}

	void delete_first(){
		int key = head_->next->key;
		delete_(key);
		return;
	}

	void delete_last(){
		ListNode *last = head_->prev;
		ListNode *second_last = last->prev;

		second_last->next = head_;
		head_->prev = second_last;
		delete last; last = NULL;
		return;
	}

	void show_list(){
		ListNode *cn = head_->next;
		
		if(cn != head_){
			std::cout << cn->key;
			cn = cn->next;
			
			while(cn != head_){
				std::cout << " " << cn->key;
				cn = cn->next;
			}
		}
		std::cout << std::endl;
		return;
	}
};

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	std::string command;
	int key = 0;
	List list = List();

	IS >> n;

	for(int i = 0; i < n; i++){
		IS >> command;

		if(command == "insert"){
			IS >> key;
			list.insert(key);
		}
		else if(command == "delete"){
			IS >> key;
			list.delete_(key);
		}
		else if(command == "deleteFirst"){
			list.delete_first();
		}
		else{
			list.delete_last();
		}
		//list.show_list();
	}

	list.show_list();
	return 0;
}