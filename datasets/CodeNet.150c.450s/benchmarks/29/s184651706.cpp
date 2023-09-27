#include <iostream>
#include <sstream>
#include <string>
#include <list>
using namespace std;

list<int>::iterator find_key(list<int>& li,int key) {
  list<int>::iterator li_itr = li.begin();
  while(li_itr != li.end()) {
    if(*li_itr == key) {
      return li_itr;
    }
    ++li_itr;
  }
  return li.end();
}

int main(void) {
  ios::sync_with_stdio(false);

  int n;
  list<int> li;

  cin >> n;
  for(int i=0;i<n;i++) {
    string command;
    cin >> command;

    int key;
    if(command == "insert") {
      cin >> key;
      li.push_front(key);
    }
    else if(command == "deleteFirst") {
      li.pop_front();
    }
    else if(command == "deleteLast") {
      li.pop_back();
    }
    else {
      cin >> key;
      list<int>::iterator erace_itr = find_key(li,key);
      if(erace_itr != li.end()) {
        li.erase(find_key(li,key));
      }
    }
  }

  list<int>::iterator itr = li.begin();
  while(itr != li.end()) {
    cout << *itr;
    ++itr;
    itr == li.end() ? cout << "" : cout << " ";
  }
  cout << endl;
}