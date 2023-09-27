#include <iostream>
#include <string>
#include <list>
using namespace std;


int main(){
	int n,a;
	string command;
	list<int> lst;
	cin >> n;
	while(n--){
		cin >> command;
		if(command == "insert"){
			cin >> a;
			lst.push_front(a);
		}else if(command == "delete"){
			cin >> a;
			for(list<int>::iterator lit=lst.begin();lit!=lst.end();lit++){
				if(*lit==a){
					lst.erase(lit);
					break;
				}
			}
		}else if(command =="deleteFirst"){
			lst.pop_front();
		}else if(command =="deleteLast"){
			lst.pop_back();
		}
	}
	list<int>::iterator it = lst.begin();
	cout <<*it;
	it++;
	while(it != lst.end()){
		cout << " "<< *it;
		it++;
	}
	cout <<endl;
	return 0;
}