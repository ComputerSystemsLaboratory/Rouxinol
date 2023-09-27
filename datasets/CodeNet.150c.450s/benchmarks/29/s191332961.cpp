#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
  int n;
//  cin >> n;
  scanf("%d", &n);
  list<int> l;
  for(int i = 0; i < n; i++){
    string command;
    cin >> command;
    if(command == "insert"){
      int x;
//      cin >> x;
      scanf("%d", &x);
      l.push_front(x);
    }
    else if(command == "deleteFirst") l.pop_front();
    else if(command == "deleteLast") l.pop_back();
    else if(command == "delete"){
      int x;
//      cin >> x;
      scanf("%d", &x);
      for(auto it = l.begin(); it != l.end(); it++) if(*it == x){
        l.erase(it);
        break;
      }
    }
  }
  for(auto it = l.begin(); it != l.end(); it++) {
    if(it != l.begin()) cout << " ";
    cout << *it;
  }
  cout << endl;
  return 0;
}