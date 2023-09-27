#include <list>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  std::list<int> lst;
  //??\???
  int count;
  cin >> count;
  string cmd;
  int num;
  for (int i = 0; i < count; i++) {
    cin >> cmd;
    if(cmd == "insert"){
      cin >> num;
      lst.push_front(num);
    }else if (cmd == "delete"){
      cin >> num;
      for(auto itr = lst.begin(); itr != lst.end(); ++itr){
        if (*itr == num){
          lst.erase(itr);
          break;
        }
      }
    }else if (cmd == "deleteFirst"){
      lst.pop_front();
    }else if (cmd == "deleteLast"){
      lst.pop_back();
    }
  }
  //??????
  bool isfirst = true;
  for(auto itr = lst.begin(); itr != lst.end(); ++itr){
    if(isfirst){
      isfirst = false;
    }else{
      cout << ' ';
    }
    cout << *itr;
  }

  cout << endl;

  return 0;
}