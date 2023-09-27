#include <iostream>
#include <string>
#include <utility>

using namespace std;

template <class T>
class mlist {
	private:
		typedef struct elm_ {
			struct elm_* next;
			struct elm_* prev;
			T value;
		} elm;
		elm* sentinel;
	public:
		mlist() {
			sentinel = new elm;
			sentinel->next = sentinel;
			sentinel->prev = sentinel;
		}
		void insert(T e) {
			elm* ne = new elm;
			ne->value = e;
			ne->next = sentinel->next;
			ne->prev = sentinel;
			ne->prev->next = ne;
			ne->next->prev = ne;
		}
		void delete_x(T e) {
			elm* cur = sentinel->next;
			while(cur != sentinel && cur->value != e) {
				cur = cur->next;
			}
			if(cur != sentinel) {
				cur->next->prev = cur->prev;
				cur->prev->next = cur->next;
				delete cur;
			}
		}
		void delete_f() {
			if(sentinel->next != sentinel) {
				elm* ne = sentinel->next;
				ne->next->prev = ne->prev;
				ne->prev->next = ne->next;
				delete ne;
			}
		}
		void delete_l() {
			if(sentinel->prev != sentinel) {
				elm* pe = sentinel->prev;
				pe->next->prev = pe->prev;
				pe->prev->next = pe->next;
				delete pe;
			}
		}
		void dump() {
			elm* cur = sentinel->next;
			while(cur != sentinel) {
				cout << cur->value;
				cur = cur->next;
				if(cur != sentinel) cout << " ";
			}
			cout << endl;
		}
};

int main () {
	int n;
	cin >> n;
	string cmd;
	int param;
	mlist<int> l;
	for(int i = 0;i < n;i++) {
		cin >> cmd;
		if(cmd == "insert") {
			cin >> param;
			l.insert(param);
		} else if(cmd == "delete") {
			cin >> param;
			l.delete_x(param);
		} else if(cmd == "deleteLast") {
			l.delete_l();
		} else if(cmd == "deleteFirst") {
			l.delete_f();
		} else {
			throw "Undefined command";
		}
	}
	l.dump();
}

