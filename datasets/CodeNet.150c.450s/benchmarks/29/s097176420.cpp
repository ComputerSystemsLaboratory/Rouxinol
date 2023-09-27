#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	list<int> intlist;
	list<int>::iterator it = intlist.begin();
	string str;
	
	for(int i = 0; i < n; i++){
		cin >> str;
		if(str == "deleteFirst"){
			intlist.pop_front();
			continue;
		}
		if(str == "deleteLast"){
			intlist.pop_back();
			continue;
		}
		cin >> m;
		if(str == "insert"){
			intlist.push_front(m);
		}
		if(str == "delete"){
			it = find(intlist.begin(),intlist.end(),m);
			if( it != intlist.end()) intlist.erase(it);
		}
	}

	it = intlist.begin();
	while(it != intlist.end()){
		if(it != intlist.begin()) cout << " ";
		cout << *it;
		++it;
	}
	cout << endl;
	return 0;
}		