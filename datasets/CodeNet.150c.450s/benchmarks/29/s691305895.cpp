#include <iostream>
#include <list>
using namespace std;

int main(void){
  int n, val;
  string com;
  list<int> lst;
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> com;
    if (com == "insert") {
      cin >> val;
      lst.push_front(val);
    } else if (com == "delete") {
      cin >> val;
      for (auto itr = lst.begin(); itr != lst.end(); itr++) {
        if (*itr == val) {
          lst.erase(itr);
          break;
        }
      }
    } else if (com == "deleteFirst") {
      lst.pop_front();
    } else if (com == "deleteLast") {
      lst.pop_back();
    }
  }
  
  for (auto itr = lst.begin(); itr != lst.end(); itr++) {
    if (itr != lst.begin()) cout << " ";
    cout << *itr;
  }
  cout << endl;
  return 0;
}