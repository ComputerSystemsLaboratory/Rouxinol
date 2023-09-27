#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n,key;
	string command;
	list<int> lst;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> command;
		if(command=="insert") {
			cin >> key;
			lst.push_front(key);
		} else if(command=="delete") {
			cin >> key;
			for(auto itr=lst.begin(); itr!=lst.end(); ++itr) {
				if((*itr)==key) {
					lst.erase(itr);
					break;
				}
			}
		} else if(command=="deleteFirst") {
			lst.pop_front();
		} else if(command=="deleteLast") {
			lst.pop_back();
		}
	}

	for(auto itr=lst.begin(); itr!=--(lst.end()); ++itr) {
		cout << *itr << " ";
	}
	cout << lst.back() << endl;
	return 0;
}